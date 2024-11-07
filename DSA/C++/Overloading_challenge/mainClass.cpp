#include <iostream>
#include <string>
#include <cstring>
using namespace std;
//* Member class

class Member{ 
//~ friend Non members -> a type qualifier is not allowed on a nonmember function {CONST}
    friend bool operator==(const Member &lhs , const Member &rhs);
    friend bool operator!=(const Member &lhs , const Member &rhs);
    friend bool operator<(const Member &lhs , const Member &rhs);
    friend bool operator>(const Member &lhs , const Member &rhs);

    friend Member operator+(const Member &lhs , const Member &rhs);
    friend Member operator+=(Member &lhs , const Member &rhs);
    friend Member operator*(Member &lhs , const Member &rhs);
    friend Member operator*=(Member &lhs , const Member &rhs);

    friend std::ostream &operator<<(std::ostream &COUT , const Member &n);
    friend std::istream &operator>>(std::istream &CIN , Member &n);
    private:
    char *name;
    public:
    Member();
    Member(const char *n);
    Member(const Member &n);
    Member(Member &&n);
    ~Member();
// ~ operators;
//~  if we need to change the left value we need to add & reffence make sure we do it;
    Member &operator=(const Member &n);
    Member &operator=(Member &&n);
    Member operator-() const;
    bool operator==(const Member &n) const;
    bool operator!=(const Member &n)const;
    bool operator<(const Member &n)const;
    bool operator>(const Member &n)const;
    Member operator+(const Member &n);
    Member operator+=(const Member &n);
    Member operator*(const Member &n);
    Member &operator*=(const Member &n);
    std::string get_Name() const;
};

//* Constructors
Member::Member():name{nullptr}{ 
    if(name == nullptr){ 
        name = new char[1];
        *name = '\0';
    }
}
Member::Member(const char *n):name{nullptr}{ 
        if(n == nullptr){ 
            name = new char[1];
            *name = '\0';
        }else{ 
            name = new char[strlen(n)+1];
            strcpy(name , n);
        }
}
Member::Member(const Member &n):name{nullptr}{ 
        name = new char[strlen(n.name)+1];
        strcpy(name , n.name);
}
Member::Member(Member &&n):name{nullptr}{
        name = new char[strlen(n.name)+1];
        strcpy(name,n.name);
        n.name = nullptr;
}
Member::~Member(){ 
    delete [] name;
}

//* Membet Methods; 
Member &Member::operator=(const Member &n){ 
    if(this == &n){ 
        return *this;
    }
    delete [] name;
    name = new char[strlen(n.name)+1];
    strcpy(name , n.name);
    return *this;
}
Member &Member::operator=(Member &&n){ 
    if(this == &n)return *this;
    delete [] name;
    name = n.name;
    n.name = nullptr;
    return *this;
}
Member Member::operator-() const{ 
    char *diff = new char[strlen(name)+1];
    for(size_t i = 0 ; i < strlen(diff); i++){ 
        if(isupper(name[i])) diff[i] = tolower(name[i]);
    }
    Member temp{diff};
    delete [] diff;
    return temp;
}

bool Member::operator==(const Member &n) const{ 
    return (strcmp(name,n.name) == 0);
}
bool Member::operator!=(const Member &n) const{ 
    return (strcmp(name,n.name) != 0);
}
bool Member::operator<(const Member &n) const{ 
    if(strlen(name) < strlen(n.name))return true;
    else return false;
}
bool Member::operator>(const Member &n) const{ 
    if(strlen(name)>strlen(n.name))return true;
    else return false;
}

Member Member::operator+(const Member &n){ 
    char *diff = new char[strlen(name)+strlen(n.name)+1];
    strcpy(diff,name);
    strcat(diff,n.name);
    Member temp{diff};
    delete [] diff;
    return temp;
}
Member Member::operator+=(const Member &n){ 
    char *diff = new char(strlen(name)+strlen(n.name)+1);
    strcpy(diff,name);
    strcat(diff ,n.name);
    delete [] name;
    name = diff;
    return *this;
}
Member Member::operator*(const Member &n){ 
    char *diff = new char[strlen(n.name)*strlen(n.name)+1];
    strcpy(diff,n.name);
    for(size_t i = 1 ; i<strlen(n.name) ; i++){ 
        strcat(diff,n.name);
    }
    delete [] name;
    name = diff;
    return *this;
}
Member &Member::operator*=(const Member &n){ 
    char *diff = new char[strlen(name)+(strlen(n.name)*strlen(n.name))+1];
    strcpy(diff,name);
    for(size_t i = 0 ; i<strlen(n.name) ;i++){ 
        strcat(diff,n.name);
    }
    delete [] name;
    name = diff;
    return *this;
}

//* o and i stream refferences to get iostreams;
std::ostream &operator<<(std::ostream &COUT , const Member &n){ 
    COUT << n.name << std::endl;
    return COUT;
}
std::istream &operator>>(std::istream &CIN , Member &n){ 
    //! we should enter only the string in the console in order to make that happen we should follow up this;
    char *diff = new char[1000];
    CIN >> diff;
    n = Member{diff};
    delete [] diff;
    return CIN;
}
std::string Member::get_Name() const{ 
    return std::string(name);
}

//* Non member methods -> do not use any type qualifiers
bool operator==(const Member &lhs , const Member &rhs){ 
    return (strcmp(lhs.name , rhs.name) == 0);
}
bool operator!=(const Member &lhs , const Member &rhs){ 
    return (strcmp(lhs.name , rhs.name) != 0);
}
bool operator<(const Member &lhs , const Member &rhs){ 
    return strlen(lhs.name)<strlen(rhs.name);
}
bool operator>(const Member &lhs , const Member &rhs){ 
    return strlen(lhs.name)>strlen(rhs.name);
}

Member operator+(const Member &lhs , const Member &rhs){ 
    char *diff = new char[strlen(lhs.name)+strlen(rhs.name)+1];
    strcpy(diff,lhs.name);
    strcat(diff,rhs.name);
    Member temp{diff};
    delete [] diff;
    return temp;
}
Member operator+=(Member &lhs , const Member &rhs){ 
    char *diff = new char[strlen(lhs.name)+strlen(rhs.name)+1];
    strcpy(diff,lhs.name);
    strcat(diff,rhs.name);
    delete [] lhs.name;
    lhs.name = diff;
    return lhs;
}
Member operator*(Member &lhs , const Member &rhs){ 
    char *diff = new char[strlen(rhs.name)*strlen(rhs.name)+1];
    strcpy(diff,rhs.name);
    for(size_t i = 1 ; i<strlen(rhs.name) ;i++){ 
        strcat(diff,rhs.name);
    }
    lhs = nullptr;
    lhs = diff;
    return lhs;
}
Member operator*=(Member &lhs , const Member &rhs){ 
    char *diff = new char[strlen(lhs.name)+(strlen(rhs.name)*strlen(rhs.name))+1];
    strcpy(diff,lhs.name);
    for(size_t i = 0 ; i<strlen(rhs.name) ;i++){ 
        strcat(diff,rhs.name);
    }
    lhs = nullptr;
    lhs = diff;
    return lhs;
}