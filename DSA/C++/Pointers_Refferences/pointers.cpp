#include <bits/std++.h>
using namespace std;

double val(){ 
    double h_t = 100.7;
    double l_t = 37.2;
    double *temp;
    temp = &h_t;
    temp = &l_t;
    // in order to print the value of the temp we need to use the pointer ahing
    // cause it is storing the values of the address and now we need to store the address in the temp 
    // retrieve the value from the address we need to *temp ;
    cout << *temp << endl;
    temp = nullptr;
    cout << sizeof temp << endl;
    return 2.2;
};
void pointer_and_address(){ 
    int a{20};
    int *b{nullptr};
    cout << "A value is : "<< a << endl;
    b = &a; //-> make sure we use the address to the pointer otherwise it shows error;
    cout << "A address is : "<< &a << endl; 
    cout << "B value is : "<< *(&a)<< endl;
    int *x = &a;
    *x = 90;
    cout << "x is  : "<< *x<< endl;
    cout << "a is  : "<< a<< endl;
}
void newTemps(){ 
    double t1 = 43.5;
    double t2 = 55.3;
    double *temp{&t1};
    cout << t1 << endl;
    cout << t2 << endl;
    cout << *temp << endl;

    temp = &t2;

    cout << t1 << endl;
    cout << t2 << endl;
    cout<<*temp<<endl;

    // New Lines 
    // 43.5
    // 55.3
    // 43.5
    // 55.3
    // 55.3
    // 55.3

}

void vectorCode (){ 
    vector <int> subs = {1,2,3,4,5};
    vector <int> *subs_ptr = &subs;
    (*subs_ptr)[0] = 25;
    // Make sure u use the ()[0] inorder to match the power of [0] or .at(0) cause . has more power than *;
    cout << "Vector adress " << &subs << endl;
    cout << "ptr adress " << subs_ptr << endl;
    for(auto a : *subs_ptr){ 
        cout << a << " ";
    }
    // 25 2 3 4 5 
}

void aboveCode(){ 
    int *p;
    cout << p << endl;
    cout << &p << endl;
    p = nullptr;
    cout << p << endl;
    cout << sizeof p << endl;
    val();
    pointer_and_address();
    cout << "New Lines "<< endl;
    newTemps();
    vectorCode();
}

void ArrayValues(){ 
    int arr[] = {1,2,3};
    int *arr_ptr{arr};

    cout << *arr_ptr<< endl;
    cout << arr + 1  << endl;
    cout << *arr << endl;
    // 1
    // 0x16b6bb1cc
    // 1
}


//^ arthemetic operation using the pointer and address;
void passByrefference(int *val){ 
    *val *=2;
}

// Swap the values in the address;
void swapper(int *a , int *b){ 
    swap(*a,*b); 
}
void arthemetic(){ 
        // make sure you use the astric sign in the loop even it is the address we should use it 
    vector<int> v = {1,2,3,4};
    int x = 23;
    const vector<int>*const val{&v};
    const int *const m = &x;
    // m = nullptr;
    // *m = 33;
    // They wont be modified due to the const used
    for(auto a : *val){ 
        cout << a << " ";
    }
}

// Main piece of code going to happen here ;

int *returnArray(size_t s , int insertVal = 0){ 
    int *numVals{nullptr};
    numVals = new int[s];
    for(size_t i{0} ; i<s ; i++) *(numVals+i) = insertVal;
    return numVals ; //Making sure we are returning the address cause we specified we should return address in the int *** val;
}
int main(){ 
    int *nums = {nullptr};

    nums = 0;
    delete [] nums;
    return 0;
}