#include<iostream>
using namespace std;

int main(){
    int a, b;
    float div;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    try{
       
       if(b==0)
        throw b;

        cout<<"Inside try block"<<endl;
        div = (a*1.0)/b;


    }catch(int x){
        cout<<"Value of divisor = "<<x<<" which is not possble."<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Divsion result: "<<div<<endl;

    return EXIT_SUCCESS;
}