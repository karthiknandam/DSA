#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

vector<int> findLongestSubArray(vector<int>& v) { 
    int maxVal = INT_MIN;
    int sum = 0;
    int start = 0, end = 0, tempStart = 0; // `tempStart` tracks the potential start of the subarray

    for (int i = 0; i < v.size(); i++) { 
        sum += v[i];

        // Update the maximum sum and the indices if a new maximum is found
        if (sum > maxVal) {
            maxVal = sum;
            start = tempStart; // set start to tempStart
            end = i; // set end to current index
        }

        // If sum becomes negative, reset it and move the temporary start
        if (sum < 0) {
            sum = 0; 
            tempStart = i + 1; // Move tempStart to the next index
        }
    }

    // Only push back the indices if we have found a valid subarray
    return {start , end};
}

int main() { 
    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> vals = findLongestSubArray(v);
    vector<int>nija(v.begin() + vals[0], v.begin() + vals[1] + 1);
    for(auto a : nija){ 
        cout << a << " ";
    }
    return 0;
}
