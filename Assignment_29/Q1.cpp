#include<iostream>
using namespace std;

class Complex{

    private:
        int real;
        int img;

    public:
        Complex():real(0), img(0){}
        Complex(int real, int img):real(real), img(img){}
        Complex(int x):real(x),img(0){}
        void setData(int real, int img){
            this->real = real;
            this->img = img;
        }
        void display(){
            cout<<"["<<this->real;
            (this->img>0)?(cout<<" + "<<this->img<<"i]"<<endl):(cout<<" - "<<-this->img<<"i]"<<endl);
        }
};

int main(){

    Complex c1;
    c1.display();
    
    int x = 5;
    c1 = x;
    c1.display();

    return EXIT_SUCCESS;
}
