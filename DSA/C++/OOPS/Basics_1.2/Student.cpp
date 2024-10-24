#include "Student.h"
#include <string>
void Student::setClass(int c){
    class_no = c;
}
void Student::setName(std::string n){ 
    name = n;
}
void Student::setID(int i){ 
    id_no = i;
}
int Student::getClass(){ 
    return class_no;
}