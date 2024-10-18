#include <bits/std++.h>

using namespace std;


int evenlyDivides(int N){
            //code here
    int s = N;
    int count = 0;
    while(s != 0){ 
        int temp = s % 10;
        if(N % temp == 0) count++;
        s/=10;
    }
    return count;
}


int main(){ 

}
    // vector<int> dp(5+1,-1);
    // int m = reverse(-123);
    // cout << m;
    // return 0;
    // // vector intializing as new Array(n).fill(-1);
    // for(auto x : dp){ 
    //     cout << x << "";
    // }


    // int m = evenlyDivides(2446);
    // cout << m;