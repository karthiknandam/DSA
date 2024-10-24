// main.cpp
#include <iostream>
#include "./Headers/Account.h"

using namespace std;

int main() {
    Account myAccount;
    myAccount.set_name("Venkat");
    cout << "Account Name: " << myAccount.get_name() << endl;
    return 0;
}
