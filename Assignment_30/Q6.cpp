#include<iostream>
using namespace std;

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
    unsigned long pin;

    cout<<"Enter Pin Code: ";
    cin>>pin;


    try{
        if(numSize(pin) != 6)
            throw -1;

        cout<<"Entered pin Code is "<<pin<<endl;
    }catch(int i){
        cout<<"Invalid pin Code"<<endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}