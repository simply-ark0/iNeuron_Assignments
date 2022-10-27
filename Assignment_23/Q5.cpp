#include<iostream>
#include<math.h>
using namespace std;


int main(){
    unsigned int l, b, h;
    cout<<"Enter length, breadth and height (spearated by spaces): ";
    cin>>l>>b>>h;

    cout<<"Area of Cuboid = "<<2*(l*b + b*h + l*h);

    return 0;

}