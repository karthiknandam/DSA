#include <string>
#include <iostream>
using namespace std;

class Account{ 
    public:
    int a = 0;
    void dispaly(){cout << a << " " << b << " " << c << endl;};
    Account()
        :a{0} , b{0} , c{0}{

    };
    private:
    int b = 0;
    protected:
    int c = 0;
};
class Savings_Account : public Account{ 
    public:
    void Member_fn(){ 
        a = 100;
        c = 200;
    };
};
int main(){ 
    Account a;
    Savings_Account s;
    s.Member_fn();
    s.dispaly();
    return 0;
}