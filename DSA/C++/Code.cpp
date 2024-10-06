#include <bits/std++.h>
using namespace std;

// int main() {
    // ^ Essential Data types for C++;
    // int num;
    // long num;
    // float x ;
    // double y ;
    // cin >> x >> y;
    // char c = 'a';
    // string myname;
    // getline(cin , myname);
    // cout << myname << endl;

//     return 0;
// }
int* newarray(int arrat[]){ 
 return arrat;
}
void modifyArray(int arr[], int num) { 
    arr[2] = num;

    // Printing the modified array
    for(int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() { 
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int num;
    cout << "Enter a number: ";
    cin >> num;
    modifyArray(arr, num);
    int* xarray = newarray(arr);
    cout << xarray << endl;
    return 0;
}
