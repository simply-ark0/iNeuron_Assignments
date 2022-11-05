#include<iostream>
using namespace std;

void max(int a, float b){
    cout<<"Int_Float Max called\n";
    cout<<"Max of "<<a<<" and "<<"b"<<" is "<<((a>b)?a:b)<<endl;
}

void max(double a, float b){
    cout<<"Double_Float Max called\n";
    cout<<"Max of "<<a<<" and "<<b<<" is "<<((a>b)?a:b)<<endl;
}

void max(double a, int b){
    cout<<"Double_Int Max called\n";
    cout<<"Max of "<<a<<" and "<<b<<" is "<<((a>b)?a:b)<<endl;
}

int main(){
    max(-90, -10.56f);
    cout<<endl;
    max(10.24, 4.50f); // if we don't put "f" it'll be by default type casted to Double and
                        // float_max won't be called.
    cout<<endl;
    max(10.234, 11);

    return 0;
}