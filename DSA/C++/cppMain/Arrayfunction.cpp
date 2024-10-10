#include <bits/std++.h>

using namespace std;


void call_array_function(int size , int array[] , int value = 0);


int main(){ 
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    call_array_function(n , arr );
    return 0;
}

void call_array_function(int size , int array[] , int value){
    cout << "[ ";
    for(size_t i {0} ; i < size ; i++){ 
        if(value) array[i] = value;
        cout << (array[i]) << " ";
    };
    cout << "]";
}
