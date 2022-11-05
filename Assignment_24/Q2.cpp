#include<iostream>
using namespace std;

unsigned short highest(int n){
    int high = 0;
    while(n!=0){
        int dig = n%10;
        if(dig>high)
            high = dig;
        n /= 10;
    }

    return high;
}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Highest value digit in number "<<n<<" is "<<highest(n);

    return 0;
}