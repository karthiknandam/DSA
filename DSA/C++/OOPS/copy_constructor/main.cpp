#include <bits/std++.h>
#include <iostream>
#include <string>
using namespace std;


class Player{ 
    private:
    string name;
    int age;
    int xp;

    public:
    string getName() {return name;}
    int getAge(){return age;}
    int getXp(){return xp;}

    Player(string name_val = "none" , int age_val = 0 , int xp_val = 0);
    Player(const Player &source);
    ~Player(){ 
        cout << "Destructor is called" << endl;
    }
};

Player::Player(string name_val , int age_val , int xp_val)
        :name{name_val} , age {age_val}, xp{xp_val}{
            cout << "Main is called " << endl;
};

Player::Player(const Player &source)
    :name{source.name} , age {source.age} , xp {source.xp}{
    // : Player{source.name , source.age , source.xp}{
    cout << "copy is called" << endl;
}

void printVariables(Player p){ 
    cout << p.getName() << endl;
    cout << p.getAge() << endl;
    cout << p.getXp() << endl;
}
int main(){ 
    Player karthik;
    printVariables(karthik);
    return 0;
}