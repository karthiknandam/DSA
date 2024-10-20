#include <bits/std++.h>
using namespace std;

    int maxLen(vector<int>& arr, int n) {
        // Your code here
        unordered_map<int , int> mpp;
        int sum = 0;
        int large = 0;
        for(int i = 0 ; i<arr.size() ;i++){ 
            sum+=arr[i];
            if(mpp.find(sum) != mpp.end()){
                large = max(large , i - mpp[sum]);
            }
            mpp[sum] = i;
        }
        return large;
    }

