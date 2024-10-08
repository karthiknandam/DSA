#include <bits/std++.h>

using namespace std;

class User { 
    int _secret = 0;

    public:
        void setSecret(const int & val){
            _secret = val;
        };
        int getSecret(){
            return _secret;
        };

};

int main(){
    int secret = 21;
    User kart;
    kart.setSecret(secret);
    cout << kart.getSecret() << endl << secret;
    return 0;
}