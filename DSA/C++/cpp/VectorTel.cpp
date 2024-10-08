#include <bits/std++.h>

using namespace std;

// template <typename T>
// void kart(T a) {
//     cout << a << endl;  // Print the last argument
// }


// template <typename T, typename... Args>
// void kart(T a, Args... args) {
//     cout << a << endl;  // Print the current argument
//     kart(args...);      // Recurse for the remaining arguments
// }

// int main() {
//     string myName = "KARTHIK";
//     kart(10, 20 ,'K',"VISHNU", "MAD");

//     return 0;
// }


void kart(const vector <int> &v){ 
    cout << "[ ";

    for(int i : v){ 
        cout << i << " ";
    }
    cout << "]" << endl;
};

int main(){ 
    vector <int> v1;
    v1.push_back(10);
    v1.push_back(20);
    vector <int> v2;
    v2.push_back(100);
    v2.push_back(200);


    vector<vector <int>> v1_2d;
    v1_2d.push_back(v1);
    vector<vector <int>> v2_2d;
    v2_2d.push_back(v2);
    kart(v1);
    cout << endl;
    kart(v2);
    cout <<endl;
    v1_2d[0][0] = 1000;
    cout << v1_2d[0][0] << " " << v1_2d[0][1] << endl;
}