#include <bits/std++.h>
using namespace std;

// Vectors are dynamic in nature unlike arrays we can manipulate the vectors like arrays in js -> 
// push pop etc.,

int main(){
    // vector<int> p;
    // p.push_back(2);
    // p.emplace_back(3);

// imp to note down that vector has the diff for push the pair and emplace the pair
    // vector<pair <int , int> > v ;
    // v.push_back({2,3});
    // v.emplace_back(2,3);


    // vector<int>::iterator x = p.begin();
    // x++;
    // cout << *(x) << endl;
    // * is acces for the value in the points to the memory;



    // vector <int> v2(5,20);
    // v2.push_back(55);
    // v2.emplace_back(33);


    // vector<int>::iterator y = v2.begin();


    // int arr[] = {1,2,3,4,5};
    // cout << *(arr) <<endl;

    // vector<int>::iterator v = v2.end();

    // points to the length of the so called vector in my terms array.length and also make the acces with the endLine--;

    // vector<int>::reverse_iterator v = v2.rend();
    // vector<int>::reverse_iterator v = v2.rbegin();



    // Noraml For loop vs

    // for(int i = 0 ; i < v2.size(); i++){ 
    //     cout << *(y) << endl;
    //     y++;
    // }

    // Auto ;
    // Make sure to deploy the iterator to the same value here provided

    // for( auto y : v2){ 
    //     cout << y<<endl;
    // }
    
    vector <int> v2(2,20);
    v2.push_back(55);
    v2.emplace_back(33);
    v2.insert(v2.begin() , 91);

    vector<int> p(2,10);
    v2.insert(v2.end() , p.begin() , p.end());

    vector<int>::iterator y = v2.begin();

    // * Removes the specific specified element and insert add at range and value and another vector ;
    // * To add the new vector we should specifie the begin and end values of new vector to it and   ->  v2.insert(v2.end() , p.begin() , p.end());

    
    v2.erase(v2.begin());

    v2.erase(v2.begin() , v2.begin()+2); // 1 -> upto +2 not 2 Same as in JS 

    for(auto y : v2){ 
        cout << y << " ";
    }


}