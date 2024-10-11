#include <bits/std++.h>

using namespace std;

// void CallF(vector<int> v ,int s){ 
//     if(s<0) {
//         return;
//     }
//     cout << v[s] << " ";
//     CallF(v , s-1);

// };

// void CallF( vector <int> v , int s){ 
//     cout << "[ ";
//     for(size_t i = 0 ; i<s ; i++){ 
//         cout << v[i] << " ";
//     }
//     cout <<"]";
// }

// void CB (vector <int> &v , int left , int right){ 
//     if(left >= right){ 
//         return;
//     }
//     swap(v[left] , v[right]);
//     CB(v , left+1 , right-1);
// }

// bool PalindromeCheck(string name , int i){ 
//     if(i == name.size()/2) return true;
//     if(name[i] != name[name.size() - i - 1])return false;
//     PalindromeCheck(name ,i+1);
//     return true;
// };

// Mutiple recursion calls;
// unsigned long long MFib(unsigned long long n){ 
//     if(n<=1) return n;
//     return MultipleRec(n-1) + MultipleRec(n-2);
// }
// int main(){ 
//     unsigned long long m = MFib(50);
//     cout << m;
//     return 0;
// }
    // vector<int> v = {1,2,3,4,5};
    // int s = v.size();
    // v[0] = 21;
    // CallF(v , s);
    // CB(v , 0 , s-1);
    // CallF(v ,s);
    // bool x = PalindromeCheck("MAM" , 0);
    // cout <<( x ? "True" : "False");


// Function to recursively calculate the nth Fibonacci number
unsigned long long Fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

// // Function to generate the Fibonacci sequence using multiple recursion
// void FibonacciGenerator(int n) {
//     for (int i = 0; i < n; ++i) {
//         cout << Fibonacci(i) << " ";  // Print each Fibonacci number
//     }
// }
// void getNum(unsigned long long m){ 
//     cout << Fibonacci(m);
// }
// int main() {
    // FibonacciGenerator(30);  // Call the generator function
    
    // unsigned long long x = Fibonacci(30);
    // cout << x;
    // return 0;


// }


// void subsetF(int i , vector <int> &v , int arr[] , int n){ 

//     if(i == n ){ 
//         for( auto m : v){ 
//             cout << m << " ";
//         }
//         if(v.size()== 0){ 
//             cout << "{}";
//         }
//         cout << endl;
//         return ;
//     }
//     v.push_back(arr[i]);

//     subsetF(i+1 , v , arr , n);

//     v.pop_back();

//     subsetF(i+1 , v , arr , n);


// }
vector<vector<int>> subsets(vector<int>& nums , int arr[] , int i = 0) {

        if( i == (sizeof(arr) / sizeof(arr[0]))){ 
            return{nums};
        }

        nums.push_back(arr[i]);

        subsets(nums , arr , i+1);

        nums.pop_back();

        subsets(nums , arr , i+1);

        
};

int main(){ 

    vector <int> v;
    int arr[] = {3,1,2};

    int s = 3;
    vector <vector <int>> my = subsets(v , arr , 0);


    for(auto k : my){ 
        for(int i = 0 ; i < k.size() ; i++){ 
            cout << k[i] << " ";
        }
        cout << endl;
    }
    // vector <vector <int>> mam;
    // mam.push_back(25);
    // subsetF(0,v,arr,s);
    return 0;
}

