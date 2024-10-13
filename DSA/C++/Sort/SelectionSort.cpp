#include <bits/std++.h>
using namespace std;

void SelectionSort(vector <int> &v){ 
    for(int i = 0 ; i< v.size()-1 ; i++){ 
        int min = i;

        for(int j = i ; j< v.size() ; j++){ 
            if(v[min] > v[j]) min = j;
        }
        if(i!=min){ 
            int temp = v[i];
            v[i] = v[min];
            v[min] = temp;
        }
    }
}
int main(){
    vector <int> v = {32,12,14,15,17,19,11};
    SelectionSort(v);
    cout << "Hello" << endl;
    cout << v.size() << endl;
    for(int i = 0 ; i< v.size() ; i++){ 
        cout << v[i] << " ";
    };
    return 0;
};