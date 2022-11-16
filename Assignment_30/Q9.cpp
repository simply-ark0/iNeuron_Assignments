#include<iostream>
#include<string>
using namespace std;

int main(){
    string email;
    cout<<"Enter email id: ";
    getline(cin, email);

    try{
        if((email.find("@")==-1) || (email.find("gmail.com")==-1))
            throw "Invalid email id!";
        
        cout<<"Entered email id: "<<email<<endl;
    }catch(const char *str){
        puts(str);
    }

    return EXIT_SUCCESS;
}