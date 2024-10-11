#include <bits/std++.h>

using namespace std;

vector<vector<int>>  ans;


    void callBack(vector <int> &nums , vector <int> &temp , int i){ 

        if(i == nums.size()){ 
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);

        callBack(nums , temp , i+1);

        temp.pop_back();

        callBack(nums , temp , i+1);

    }

    vector<vector<int>> subsets(vector<int>& nums ) {
        vector<int> temp;
        callBack(nums , temp , 0);
        return ans;

    }