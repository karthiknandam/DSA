#include <bits/std++.h>

using namespace std;


class Player{ 
    private:
    int *data;

    public:
    int getData(){ return *data;}
    void setData(int d){    
        *data = d;
    };
    Player(int d = 0);
    Player(const Player &p);
    ~Player();
};

Player::~Player(){ 
    delete data;
}

Player::Player(int d){
    data = new int;
    *data = d;
}
Player::Player(const Player &p):Player{*p.data}{};
// setting the value as the deep copy not the address here the value make sure of that;

void getData(Player p){ 
    cout << p.getData() << endl;
}

int main(){ 
    Player karthik{100};
    getData(karthik);

    Player mish{karthik};
    mish.setData(1000);
    cout << mish.getData() << endl;
    cout << karthik.getData() << endl;
    return 0;
}