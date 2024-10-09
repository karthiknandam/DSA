#include <bits/std++.h>

using namespace std;

void check(){ 
    int array[] = {1,2,3,4};
    for(int i = 0; i < size(array); ++i){
        cout << array[i] << endl;
    }
 }
int main(){ 
    const int dollar = 100;
    const int quater = 25;
    const int dime = 10;
    const int nickel = 5;
    const int penny = 1;

    int pennis {0};
    cout << "Enter the centes we'll convert them into the dollar cands : ";
    cin >> pennis ;
    cout << endl;


    int dollars = pennis / dollar;
    pennis %= dollar;
    int quaters = pennis / quater;
    pennis %= quater;
    int dimes = pennis / dime;
    pennis %= dime;

    int nickels = pennis / nickel;
    pennis%=nickel;


    int pennis_left = pennis;

    cout << "D :" << dollars<< endl;
    cout << "Q :" << quaters<< endl;
    cout << "Dimes :" << dimes<< endl;
    cout << "Nickels :" << nickels<< endl;
    cout << "Penny :" << pennis_left<< endl; 

    check();
    return 0 ;
}