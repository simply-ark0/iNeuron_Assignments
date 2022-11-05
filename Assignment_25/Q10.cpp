#include<iostream>
#include<math.h>
using namespace std;

class Area{
    
    private:
        int l, b;
        int n;
        int r;

    public:
        void setRectValues(int l, int b){
            this->l = l;
            this->b = b;
        }

        void setSquareValues(int n){
            this->n = n;
        }

        void setCircleValues(float r){
            this->r = r;
        }

        void printRectArea(){
            cout<<"Area of Rectangle = "<<l*b<<endl;
        }

        void printSquareArea(){
            cout<<"Area of Square = "<<n*n<<endl;
        }

        void printCircleArea(){
            cout<<"Area of Circle = "<<M_PI*r*r<<endl;
        }
};

int main(){
    Area a;

    a.setSquareValues(9);
    a.setRectValues(22, 45);
    a.setCircleValues(8);

    a.printSquareArea();
    a.printRectArea();
    a.printCircleArea();

    return 0;
}