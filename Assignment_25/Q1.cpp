#include<iostream>
using namespace std;

class Complex{
    
    private:
        int real;
        int img;

    public:
        void setValues(int real, int img){
            this->real = real;
            this->img = img;
        }
        void printValues(){
            cout<<"["<<this->real<<" + "<<this->img<<"i]"<<endl;
        }
};

int main(){
    Complex c1, c2;
    c1.setValues(1, 2);
    c2.setValues(5, 6);

    c1.printValues();
    c2.printValues();

    return 0;
}