#include <bits/std++.h>

using namespace std;

// enums are predefined set of values so we can use them later
// for instance  PI = 3.14;
enum msOffice {
    // we can specifie the :u int _ 8 bit like this to more time saving
    BOLD = 2,
    WIDTH = 4,
    HEIGHT ,
    DEPTH,
};

struct User
{
    const int uId;
    string name;
    string email;
    int courses_took;
};
// Template

template <typename T>
T addMe(T a , T b){
 return a+b;
}

// function pointer ()

void pointer(){
    puts("Hey There");
}

int main(){ 
    User karthik = {213 , "Karthikeya" , "karthik@gmail.com" , 2};
    cout << karthik.courses_took << endl << karthik.name << endl;
    int tere = HEIGHT; 


    // Template part
    cout << addMe(2,4) << endl;
    cout << addMe(2.5 , 3.2) << endl;
    

    // Function pointer make sure use the same type name 
    void (*poniterNew)() = pointer;
    poniterNew();

    return 0;
}

