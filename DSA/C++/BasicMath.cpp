#include <bits/std++.h>

using namespace std;



int ArmStrongNum(int n){ 
    int dup = n;

    int result = 0;
    int s = to_string(dup).size();
    while(n>0){ 
        int l = n % 10;
        result = result + pow(l , s);
        n /= 10;
    }
    return dup == result;
}

int reverse(int x) {
    int result = 0;
        while(x!=0){ 
            int last = abs(x) % 10;
            result = result * 10 + abs(last);
            cout << result << " ";
            x/=10;
        }
     return x>0 ? result : -result;
}


int sumOfDivisibles(int n){ 
    int result = 0;
    for(int i = 1; i <= sqrt(n) ; i++){ 
        if(n%i == 0){ 
            if(i == sqrt(n)) result+=sqrt(n);
            else{
                int m = n/i;
                int n = m+i;
                result+=n;
            }
        }
    }
    cout << result;
}
int main(){ 
    int v = ArmStrongNum(1634);
    cout << (v ? "True" : "False") << endl;
    sumOfDivisibles(36);
    return 0;
}
