#include <bits/std++.h>
using namespace std;

void setLearn(){ 
    set<int> s;
    
    s.insert(2);
    s.insert(3);
    s.insert(4);

    int it = s.count(2);
    auto it_find = s.find(2);

    
    cout << it << endl;
    cout << *it_find << endl;
}

void mutliSET(){ 
// Here we can have many same contest nums

    multiset<int> ms;
    ms.emplace(1);
    ms.emplace(1);
    ms.emplace(1);
    

    ms.erase(ms.find(1));
    // ms.erase(1);
    int f = ms.count(1);
    cout << f;
}

void Uset(){ 
    unordered_set <int> us ;
    us.insert(2);
    us.insert(3);
    us.insert(2);
    us.insert(15);
    us.insert(15);
    us.insert(18);

// store unique but there is no order for it
    while(!us.empty()){ 
        cout << *us.begin() << " ";
        us.erase(us.begin());
        // 15 18 3 2 
    }
}
int main(){ 
    setLearn();
    cout << "MS" << endl;
    mutliSET(); 
    cout << endl;
    Uset();
}