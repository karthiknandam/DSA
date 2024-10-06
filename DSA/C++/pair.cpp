#include <bits/std++.h>
using namespace std;
int main(){ 
    pair <int, pair<int , int>> arr[] = {{1,{2,3}} , {4,{3,5}}};
    cout << arr[0].second.first  << endl;
    cout << arr[1].second.second << endl;
}