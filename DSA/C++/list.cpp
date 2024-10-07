#include <bits/std++.h>
using namespace std;
int Learnlist(){ 
    list <int> l;
    l.push_back(9);
    l.emplace_back(8);
    
    l.front();
    l.back();

    // l.swap(1);
    l.pop_back();

}