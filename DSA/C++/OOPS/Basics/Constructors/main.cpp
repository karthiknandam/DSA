#include <bits/std++.h>
using namespace std;
 
class Player{ 
    private:
    string name;
    int age;
    int xp;

    public:
    Player()
        :name{"None"} , age{0} , xp{0}{
    }
    Player(string name , int age , int xp){ 
        this->name = name;
        this->age = age;
        this->xp = xp;
    }
    void getDetails(){
        cout << name << "  " << age << "  " <<xp<<endl;
    }

};

int main(){ 
    Player *karthik = new Player("karthik" , 21 , 18);
    karthik->getDetails();
    karthik->violenece = 44;
    cout << karthik->violenece << endl;
    delete karthik;

    Player mish{"mish",13 , 100};
    mish.getDetails();
}
