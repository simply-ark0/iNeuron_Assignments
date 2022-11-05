#include<iostream>
using namespace std;

int add(int a, int b, int c = 0){
    return a+b+c;
}

int main(){
    int a, b, c;
    cout<<"Enter 3 numbers (separated by spaces): ";
    cin>>a>>b>>c;

    cout<<"Addition of "<<a<<" & "<<b<<" = "<<add(a, b)<<endl;
    cout<<"Addition of "<<a<<" & "<<b<<" & "<<c<<" = "<<add(a, b, c)<<endl;

    return 0;
}