#include<iostream>
using namespace std;

int main(){
    int i, j;

    cout<<"Enter two numbers: ";
    cin>>i>>j;

    try{
        if(i==0)
            throw i;
        
        if(j==10)
            throw "j cannot be 10";
    }catch(int i){cout<<"Value of i = "<<i<<" which is not possble."<<endl;}
     catch(const char *str){
         cout<<"Error message: ";
         puts(str);
     }

     return EXIT_SUCCESS;
}