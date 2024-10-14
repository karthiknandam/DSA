#include <bits/std++.h>
using namespace std;
// Also i = 0 ; i < n-1 ; i++ ;
// j = 0 ; j < n-i-1 ; j++ ; 
void Bs(vector <int> &v){ 
    for(int i = v.size()-1  ; i > 0; i--){ 
        bool sorted = true;
        for(int j = 0 ; j < i  ; j++){ 
            if(v[j] > v[j+1]){ 
                sorted = false;
                cout << j << " ";
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
        if(sorted) break;
    }
    cout << endl;
}

// Make sure we follow the steps we need to 
int main(){ 
    vector <int> v = {1,2,3,4,5,6};
    Bs(v);
    for(auto a : v){ 
        cout << a << " ";
    }
    return 0;
}