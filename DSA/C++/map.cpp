#include <bits/std++.h>

using namespace std;

bool comp(pair <int , int> p1 , pair<int ,int> p2){ 
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    return p1.first > p2.first;
}
void maper(){ 

    // Stores the key and value similar to map in js ;

    map<int , int> m ;
    m.insert({1,2});
    m.insert({2,3});
    m.insert({3,1});

    for(auto it : m){ 
        cout << it.first << it.second << endl;
    }



}

void multiMap(){
    //  similar to the map but stores duplicate values ;
    
}
int main(){ 
    maper();
    return 0;
}