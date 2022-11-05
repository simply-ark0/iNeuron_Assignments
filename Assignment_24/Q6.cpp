#include<iostream>
using namespace std;

void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(){
    int x, y;
    cout<<"Enter two numbers (Separated by space): ";
    cin>>x>>y;

    cout<<"Numbers before swap:\n";
    cout<<"x = "<<x<<" & y = "<<y<<endl;

    swap(x, y);

    cout<<"Numbers after swap:\n";
    cout<<"x = "<<x<<" & y = "<<y<<endl;

    return 0;
}