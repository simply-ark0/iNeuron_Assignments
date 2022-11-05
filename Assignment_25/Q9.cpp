#include<iostream>
#include<math.h>
using namespace std;

class Circle{
    
    private:
        float r;
        double area;
    
    public:
        void setValues(float r){
            this->r = r;
        }
        float getR(){return this->r;}
        double getArea(){return this->area;}
        void calArea(){
            this->area = M_PI*this->r*this->r;
        }
};

int main(){
    Circle c1, c2, c3;

    c1.setValues(2);
    c2.setValues(5);
    c3.setValues(10);

    c1.calArea();
    c2.calArea();
    c3.calArea();

    cout<<"Area of circle with radius "<<c1.getR()<<" = "<<c1.getArea()<<endl;
    cout<<"Area of circle with radius "<<c2.getR()<<" = "<<c2.getArea()<<endl;
    cout<<"Area of circle with radius "<<c3.getR()<<" = "<<c3.getArea()<<endl;

    return 0;
}