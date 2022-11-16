#include<iostream>
using namespace std;

int numSize(unsigned long n){
    int i=0;
    while(n){
        i++;
        n /= 10;
    }

    return i;
}

int main(){
    unsigned long phone;

    cout<<"Enter phone no.: ";
    cin>>phone;


    try{
        if(numSize(phone) != 10)
            throw -1;

        cout<<"Entered phone no. is "<<phone<<endl;
    }catch(int i){
        cout<<"Invalid phone no."<<endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}