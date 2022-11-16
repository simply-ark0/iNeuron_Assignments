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
    string nickname;

    cout<<"Enter Nickname: ";
    getline(cin, nickname);

    try{
        if(nickname.size()>8 || is_digit(nickname) || is_special_symbol(nickname) || (nickname.find(" ")!=-1))
            throw "Invalid Nickname";

        cout<<"Entered Nickname: "<<nickname<<endl;
    }catch(const char *str){
        puts(str);
    }


    return EXIT_SUCCESS;
}