#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;

    public:
        Complex(){
            this->real = 0;
            this->img = 0;
        }
        Complex(int real, int img){
            this->real = real;
            this->img = img;
        }
        void display(){
            cout<<"["<<this->real;
            (this->img>0)?(cout<<" + "<<this->img<<"i]"<<endl):(cout<<" - "<<-this->img<<"i]"<<endl);
        }
        Complex operator=(Complex C){
            this->real = C.real;
            this->img = C.img;

            return *this;
        }
};

int main(){

    Complex c1(2,3), c2;
    c2 = c1;

    c1.display();
    c2.display();

    return EXIT_SUCCESS;
}