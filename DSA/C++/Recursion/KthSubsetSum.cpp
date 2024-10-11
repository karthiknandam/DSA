#include <bits/std++.h>

using namespace std;

bool PrintS(vector<int> &mv , vector <int> v , int i , int isum , int sum , int n ){

    // in the second case we are intializing the bool value and returning the value immediatly if the scope entered is false then push it to the stack else exit;
    // This doesnt get out of it main calls are recursions make sure to return there not here;

    if(i==n){ 
        if(isum == sum) {
            for(auto x : v){ 
                cout << x << " ";
            }
            cout<<endl;
            return true;
        }
        else return false;
    }
    // if(isum != sum){

    // One line of code changes the entire process which means we can only able to print only one subsequence of the value which
    // which in the case 3,2 only 
    // Previously we are taking the all subsequent such as [3,2] and [4,1] which we do not want 
    // Any ways this is the one side approach;
    // }
    v.push_back(mv[i]);
    isum+=mv[i];

    if(PrintS(mv , v , i+1 , isum , sum , n)) return true;

    v.pop_back();
    isum-=mv[i];

    if(PrintS(mv , v , i+1 , isum , sum , n)) return true;

    return false;
};

int kingOfAllRec(vector<int> &mv , int i , int isum , int sum , int n ){ 
    

    if(i==n) {
        if(isum == sum) return 1 ;
        // in this case we are just adding the no of subsequent eliments;
        else return 0;
    }
    isum+=mv[i];
    int l = kingOfAllRec(mv , i+1 , isum , sum , n);

    isum-=mv[i];

    int r = kingOfAllRec(mv , i+1 , isum , sum , n);

    return l+r;

}

int main(){ 
    vector <int> mv = {3,4,1,2};
    int sum = 5;
    vector <int> v ;
    int n = mv.size();
    int king = kingOfAllRec(mv,0,0,sum,n);
    cout << king << endl;

    PrintS(mv,v,0,0,sum,n);



}