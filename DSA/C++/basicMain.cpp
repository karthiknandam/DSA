#include <iostream>
#include "Name.cpp"

int main() { 
    Name empty = "Nandam only";
    // empty.get_len();
    
    // std::cout << "String content: " << empty.get_str() << std::endl;
    
    Name name{"Hello, Venkat!"};
    name = empty;
    name = "Karthik only";
    std::cout << empty.get_str() << std::endl;
    std::cout << name.get_str() << std::endl;
    // name.get_len();
    // std::cout << "String content: " << name.get_str() << std::endl;

    // std::cout << "For move costructor" << std::endl;

    // Name a{"Hello mowa"};
    // a = "Hello";
    // a.get_str();
    return 0;
}
