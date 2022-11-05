#include<iostream>
using namespace std;

class Rectangle{
    
    private:
        int l;
        int b;
        int area;
    
    public:
        void setValues(int l, int b){
            this->l = l;
            this->b = b;
        }
        int getArea(){return this->area;}
        void calArea(){
            this->area = this->l*this->b;
        }
};

int main(){
    Rectangle r1, r2, r3;

    r1.setValues(2, 3);
    r2.setValues(5, 10);
    r3.setValues(22, 30);

    r1.calArea();
    r2.calArea();
    r3.calArea();

    cout<<"Area for object r1 = "<<r1.getArea()<<endl;
    cout<<"Area for object r2 = "<<r2.getArea()<<endl;
    cout<<"Area for object r3 = "<<r3.getArea()<<endl;

    return 0;
}