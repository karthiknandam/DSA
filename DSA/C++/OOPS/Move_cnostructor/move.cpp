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
    Player(Player &&p);
    ~Player();
};

Player::~Player(){ 
    if(data != nullptr){
        cout << "Shallow is called" << endl;
    }else{ 
        cout << "Move is called" << endl;
    };
    delete data;
}

Player::Player(int d){
    data = new int;
    *data = d;
}
Player::Player(const Player &p):Player{*p.data}{
    cout << " Player shallow is called" << endl;
};

// Player::Player(Player &&p)
//     :data{p.data}{ 
//         p.data = nullptr;
//         cout << "Move is called" << endl;
//     }
// setting the value as the deep copy not the address here the value make sure of that;

// void getData(Player p){ 
//     cout << p.getData() << endl;
// }

// int main(){ 
//     // vector<Player> plays;
//     // plays.push_back(Player{10});
//     // plays.push_back(Player{20});
//     // plays.push_back(Player{30});
//     // plays.push_back(Player{40});
//     // plays.push_back(Player{50});
//     // plays.push_back(Player{60});
//     return 0;
// }

int main() {
    vector<int> nums(7); // Create a vector of size 7
    iota(nums.begin(), nums.end(), 7); // Fill with values starting from 7

    // Display the vector
    for (int num : nums) {
        std::cout << num << " ";
    }

    return 0;
}