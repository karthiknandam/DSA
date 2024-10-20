#include <bits/std++.h>
using namespace std;

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1; 
        int j = n - 1;     
        int k = m + n - 1; 

        // Start merging from the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
void swapIfGreater(vector<int> &arr1 , vector<int> &arr2, int ind1, int ind2) {
    if (arr1[ind1] > arr2[ind2]) {
        swap(arr1[ind1], arr2[ind2]);
    }
}
void gapTheroy(vector<int> &arr1 , vector<int> &arr2 , int a , int b){ 
    int len = a+b;
    int gap = (len/2)+(len%2);

    while(gap > 0){ 
        int left = 0;
        int right = left+gap;
        while(right < len){ 
            // Both cases
            if(left < a && right >=a){ 
                swapIfGreater(arr1 , arr2 ,left , right-b);
            }
            else if(left >= a){ 
               swapIfGreater(arr1 , arr2 ,left-b , right-b);
            }else{ 
                swapIfGreater(arr1 , arr2 ,left , right);
            }
            left++;
            right++;
        }
        if(gap == 1) break;
        gap = (gap/2)+(gap%2);
    }
}
int main(){ 
    vector<int> arr1 = {1,5,6};
    vector<int> arr2 = {2,3,4};

    gapTheroy(arr1 , arr2 , 3,3);
    for(auto a : arr1){ 
        cout << a << " ";
    }
}
// 0 1
// 4 1
// 6 1
