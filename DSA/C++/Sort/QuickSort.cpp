#include <bits/std++.h>
using namespace std;

int Pindex(vector<int> &v , int low , int high){ 
    int piv = v[low];
    int i = low;
    int j = high;
    while(i<j){ 
        while(v[i]<=piv && i<high) i++;
        while(v[j]>piv && j>=low+1) j--;
        if(i<j) swap(v[i] , v[j]);
    }
    swap(v[low],v[j]);
    return j;
};

void QuickSort(vector<int> &v , int low , int high){ 
    if(low < high){ 
        int piv  = Pindex(v , low , high);
        QuickSort(v , low , piv-1);
        QuickSort(v,piv+1,high);
    }
}

    void rotate(vector<int>& nums, int k) {
        for(int i = 0 ; i<k ; i++){
            int el = nums.back();
            nums.front();
        }

    }

int main(){ 
    vector <int> v = {4,6,2,5,7,9,1,3};
    int n = v.size()-1;
    QuickSort(v,0,n);
    cout << endl << v.back();
    for(auto a : v){ 
        cout << a << " ";
    }
    return 0;
}