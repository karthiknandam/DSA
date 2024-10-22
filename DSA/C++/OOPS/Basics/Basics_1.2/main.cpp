#include <bits/std++.h>
using namespace std;
#include "Student.h"
     
int main(){
    Student karthik;
    karthik.setName("Karthikeya");
    karthik.setID(1243);
    karthik.setClass(143);
    auto a = karthik.getClass();
    cout << a << endl;
};