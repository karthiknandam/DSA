#ifndef _STUDENT_H
#define _STUDENT_H

#include <bits/std++.h>
#include <iostream>
class Student{ 
    private:

    std::string name;
    int id_no;
    int class_no;

    public:
    void setName(std::string);
    void setID(int);
    void setClass(int);


    int getClass();
};

#endif 