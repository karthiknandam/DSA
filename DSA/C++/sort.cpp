#include <bits/std++.h>

using namespace std;
bool comp (pair<int , int > p1 , pair<int , int > p2){ 
    if(p1.second > p2.second) return false;
    if(p1.second < p2.second) return true;

    return p1.first < p2.first;

}
void sorter(){ 
    pair <int , int > a[] = {{1,2}, {2,3} , {4,2}};

    sort(a , a+3 ,  comp);

    for( auto &p : a){ 
        cout << "{" << p.first << "," << p.second << "}" << endl;
    }

    vector<int> x = {2,3,4,6,1,0,13};

    sort(x.begin() , x.end() , greater<int>());

    for( auto p : x){ 
        cout << p << " ";
    }

    auto it = *max_element(x.begin() , x.end() );
    auto it_min = *min_element(x.begin() , x.end());
    cout<<endl;
    cout << "Max " << it << " Min " << it_min << endl;
}

int main(){ 
    sorter();
    return 0;
}