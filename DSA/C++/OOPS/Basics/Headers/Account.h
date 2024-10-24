// Account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    std::string name;
    double balance;
public:
    void set_name(std::string n);
    std::string get_name();
};

#endif // ACCOUNT_H
