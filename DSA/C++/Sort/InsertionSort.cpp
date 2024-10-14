#include <bits/std++.h>
using namespace std;

void InsertionSort(vector <int> & v){ 
    int s = v.size();
    for(int i = 1 ; i < s ; i++){ 
        int j = i;
        while(j>0 && v[j] < v[j-1]){ 
                int temp = v[j];
                v[j] = v[j-1];
                v[j-1] = temp;
            j--;
        }
    }
} 
int main(){ 
    vector <int> v = {14,9,3,5,14,33,12,22,10,1,3,11,10};
    InsertionSort(v);
    for(auto a : v){ 
        cout << a << " ";
    }
}