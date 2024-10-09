#include <bits/std++.h>
using namespace std;

void VowelFouder() { 
    vector <char> v = {'h' , 'e' , 'l' , 'l' ,'o'};


    int i {0};

    do{
        char vec = v[i];
        if(vec == 'a' || vec == 'e' || vec == 'i' || vec == 'o' || vec == 'u'){
            cout << "Found at index : "<< i << " " << v[i];
            break;
        }
        else i++;

    }while( i < v.size());
}
void temp(){ 
    int temperature = 70;
cout << "Enter a temperature: ";

if (temperature < 50);
   cout << "It's cold!" << endl;
if (temperature > 50)
   cout << "It's hot!" << endl;
else
   cout << "Maybe it's raining?";
}
int main(){ 
    vector<int> v = {1,2,3,4,5,6,-99,23};
    int i {0};
    while(i < v.size() && v[i] != -99){ 
        i++;
    }
    cout << i << endl;
    cout <<"Vowel Check"<<endl;
    VowelFouder();
    cout << endl;
    temp();
    return 0;
}

