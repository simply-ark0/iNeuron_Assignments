#include<iostream>
using namespace std;

void max(float a, float b){
    cout<<"Float Max called\n";
    cout<<"Max of "<<a<<" and "<<"b"<<" = "<<((a>b)?a:b)<<endl;
}

void max(int a, int b){
    cout<<"Int Max called\n";
    cout<<"Max of "<<a<<" and "<<b<<" = "<<((a>b)?a:b)<<endl;
}

int main(){
    max(90, -10);
    cout<<endl;
    max(10.24f, 4.50f); // if we don't put "f" it'll be by default type casted to Double and
                        // float_max won't be called.

    return 0;
}