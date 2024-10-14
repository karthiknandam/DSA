#include <bits/std++.h>
    #include <chrono>
    using namespace std::chrono;

using namespace std;

void Merge(vector <int> &v , int l , int m , int h){ 
    vector <int> temp;
    int left = l;
    int right = m+1;
    while(left <= m && right <= h){ 
        if(v[left] < v[right]) temp.push_back(v[left++]);
        else temp.push_back(v[right++]);
    }

    while(left<=m)temp.push_back(v[left++]);
    while(right<=h)temp.push_back(v[right++]);

    for(int i = 0 ; i<temp.size() ; i++) v[l+i] = temp[i];

}
void MergeSort(vector <int> &v , int l , int h){ 
    if(l==h) return;
    int m = (l+h)/2;

    MergeSort(v,l,m);
    MergeSort(v,m+1,h);
    Merge(v,l,m,h);
}
int main(){ 
    vector<int> v = {13,14,9,4,2,0,7,2,14,17,18,14,1,5,7,9};
    int n = v.size()-1;


auto start = high_resolution_clock::now();

MergeSort(v,0,n);
// Your code here (e.g., function call)

auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start);

cout << "Time taken: " << duration.count() << " ms" << endl;

    for(auto a : v){ 
        cout << a << " ";
    }
    return 0;
}