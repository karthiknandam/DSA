#include <bits/std++.h>

using namespace std;

int main(){ 

    int arr[] = {1,2,3,4,5};
    int *newArr = arr;
    newArr[0] = 24;
    int &kar = newArr[0];
    kar = 33;
    int nxArr[3];
    *nxArr = 44;
    
    int *mad = nxArr;
    mad++;
    *mad = 100;

    cout << nxArr[1 ];

    cout << nxArr[0];
    cout << arr[0] <<endl;
    cout <<newArr[0];

}