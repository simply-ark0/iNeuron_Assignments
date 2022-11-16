#include<iostream>
using namespace std;

int main(){
    int i;

    cout<<"Enter a number: ";
    cin>>i;

    try{   
        if(i==0)
            throw i;
        
        cout<<"Inside try"<<endl;
    }catch(int i){cout<<"Value of i = "<<i<<" which is not possble."<<endl;}

     return EXIT_SUCCESS;
}