#include<iostream>
#include<string>
using namespace std;

bool is_digit(const string &s){
    for(int i=0; i<s.size(); i++)
        if(s[i]>=48 && s[i]<=57)
            return 1;
    
    return 0;
}

bool is_special_symbol(const string &s){
    string specialSym = "~`!@#$%^&*()_-+={[]}|:;\\\"'<,>.?/";
    for(int i=0; i<s.size(); i++)
        if(specialSym.find(s[i]) != -1)
            return 1;
    
    return 0;
}

int main(){
    string user;

    cout<<"Enter Username: ";
    getline(cin, user);

    try{
        if(user.size()<6 || is_digit(user) || is_special_symbol(user))
            throw "Invalid User Name";

        cout<<"Entered Username: "<<user<<endl;
    }catch(const char *str){
        puts(str);
    }


    return EXIT_SUCCESS;
}