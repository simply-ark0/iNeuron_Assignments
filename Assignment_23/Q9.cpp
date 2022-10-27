#include<iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;

    cout<<"Max of "<<x<<" and "<<y<<" is "<<((x>y)?x:y);

    return 0;
}