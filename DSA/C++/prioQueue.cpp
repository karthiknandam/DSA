#include <bits/std++.h>

using namespace std;

void PQ(){ 

    priority_queue <int> pq ;

    pq.push(1);
    pq.push(5);
    pq.emplace(3);


// To store value from low to high;
    priority_queue <int , vector<int> , greater<int> > pqLow ;
    
    pqLow.push(1);
    pqLow.push(5);
    pqLow.emplace(3);

    while(!pq.empty()){ 
        cout << pq.top() << " ";
        pq.pop();
    }
        while(!pqLow.empty()){ 
        cout << pqLow.top() << " ";
        pqLow.pop();
    }
}

int main(){ 
    PQ();
    return 0;
}