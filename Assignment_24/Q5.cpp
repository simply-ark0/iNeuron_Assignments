#include<iostream>
using namespace std;

bool checkFibb(int n){
    int n1 = 0, n2 = 1, n3;

    if(n==0)
        return 1;
    if(n<0)
        return 0;
    while(1){
        n3 = n2+n1;
        n1 = n2;
        n2 = n3;
        cout<<n3<<" ";
        if(n3 == n)
            return 1;
        else if(n3>n)
            return 0;
    }

}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    (checkFibb(n))?cout<<endl<<"Number "<<n<<" is a part of Fibonacci Series"
                  :cout<<endl<<"Number "<<n<<" is not a part of Fibonacci Series";


    return 0;
}