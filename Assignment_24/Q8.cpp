#include<iostream>
#include<math.h>
using namespace std;

float area(int a){
    return M_PI*a*a;
}

int area(int a, int b){
    return a*b;
}

float area(int a, int b, int c){
    float s = (a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
} 

int main(){
    int r, len, br, a, b, c;

    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"Enter length and breadth of circle: ";
    cin>>len>>br;
    cout<<"Enter 3 sides of triangle (Separated by spaces): ";
    cin>>a>>b>>c;

    cout<<"Area of Circle = "<<area(r)<<endl;
    cout<<"Area of Rectangle = "<<area(len, br)<<endl;
    cout<<"Area of Triangle = "<<area(a, b, c)<<endl;

    return 0;

}