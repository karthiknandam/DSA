#include <bits/std++.h>

using namespace std;

void forLooop(char mains[]){ 
    cout << "[ ";
    for(int i = 0 ; mains[i] != '\0' ; ++i){ 
        cout << mains[i] << " ";
        
    }
    cout << "]";
    cout << endl;
}

int main(){ 
    char first_name[] = {"Karthik"};
    char last_name[] = {"Nandam"};
    char full_name[30]{};

    forLooop(first_name);
    forLooop(last_name);

    strncat(full_name , first_name , sizeof(full_name) - strlen(full_name) - 1);
    strncat(full_name , " " , sizeof(full_name) - strlen(full_name) - 1);
    strncat(full_name , last_name , sizeof(full_name) - strlen(full_name) - 1);

    forLooop(full_name);

    char temp[30]{};
    strcpy(temp , full_name);

    cout <<"\n" << strcmp(full_name , temp) << endl;

    forLooop(temp);
    // sizeof determines the size of the entire set array we have set before

    cout << strlen(full_name) << " "<< sizeof(full_name) << endl;

    cout << full_name << endl;

    int a = 'a';
    cout << a;



}