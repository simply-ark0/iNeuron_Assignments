#include<iostream>
using namespace std;

int main(){
    string email;

    cout<<"Enter email: ";
    getline(cin, email);

    try{
        if(email.find("@") == -1)
            throw -1;

        cout<<"Entered E-mail is "<<email<<endl;
    }catch(int i){
        cout<<"Invalid email address"<<endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}