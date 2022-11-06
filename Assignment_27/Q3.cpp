#include<iostream>
using namespace std;

class Complex{
    
    private:
        int r;
        int i;

    public:
        Complex(int r, int i){
            this->r = r;
            this->i = i;
        }
        Complex(int r){
            this->r = r;
            this->i = 0;
        }
        Complex(){
            this->r = 0;
            this->i = 0;
        }
        void display(){
            if(this->i>=0)
                cout<<"["<<this->r<<" + "<<this->i<<"i]"<<endl;
            else
                cout<<"["<<this->r<<" - "<<-this->i<<"i]"<<endl;
        }

        friend Complex operator+(Complex, Complex); // declaration of operator+

};

// definition of operator+
Complex operator+(Complex c1, Complex c2){
    Complex temp;
    temp.r = c1.r + c2.r;
    temp.i = c1.i + c2.i;

    return temp;
}

int main(){
    Complex c1(3,5), c2(9, 10);

    Complex c3 = c1+c2; // c3 = operator+(c1, c2);
    c3.display();

    return 0;

}