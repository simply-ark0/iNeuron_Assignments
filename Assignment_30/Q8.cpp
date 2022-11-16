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

bool is_cap(const string &s){
    for(int i=0; i<s.size(); i++)
        if(s[i]>=65 && s[i]<=90)
            return 1;
    
    return 0;
}

int main(){
    string pass;

    cout<<"Enter Password: ";
    getline(cin, pass);

    try{
        if(pass.size()<6 || !is_digit(pass) || !is_special_symbol(pass) || !is_cap(pass))
            throw "Invalid Password!";

        cout<<"Entered Password: "<<pass<<endl;
    }catch(const char *str){
        puts(str);
    }


    return EXIT_SUCCESS;
}