#include<iostream>
using namespace std;

int pow(int x, int y){ //x^y
    if(y == 1)
        return x;

    return x * pow(x, y-1);
}

int main(){

    int x, y;
    cout<<"Enter Base and Power (separated by space): ";
    cin>>x>>y;

    cout<<x<<"^"<<y<<" = "<<pow(x, y)<<endl;

    return 0;

}