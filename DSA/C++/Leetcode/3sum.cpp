#include <bits/std++.h>
using namespace std;

void threeSum(vector<int> v) {
    set<vector<int>> result;
    int n = v.size();

    for (int i = 0; i < n - 1; i++) {
        map<int, int> mpp;

        for (int j = i + 1; j < n; j++) {
            int value = -(v[i] + v[j]); 

            if (mpp.find(value) != mpp.end() && mpp[value] > 0) {
                vector<int> newSort = {v[i], v[j], value};
                sort(newSort.begin() , newSort.end());
                result.insert(newSort);
                
                mpp[value]--; 
            }

            mpp[v[j]]++;
        }
    }

    for (const auto& triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<int> v = {-1,1,0,2,-4};
    threeSum(v);
}
