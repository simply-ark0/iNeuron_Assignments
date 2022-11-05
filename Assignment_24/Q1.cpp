#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n){

    for(int i=2; i<sqrt(n); i++)
        if(n%i==0)
            return 0;

    return 1;
}

int main(){

    int n;
    cout<<"Enter number: ";
    cin>>n;

    (isPrime(n)) ? cout<<"Number "<<n<<" is Prime"
                 : cout<<"Number " << n << " is NOT Prime";

    return 0;
}