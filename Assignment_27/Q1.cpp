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
        Complex operator+(Complex C){
            Complex temp;
            temp.r = this->r + C.r;
            temp.i = this->i + C.i;

            return temp;
        }

        Complex operator-(Complex C){
            Complex temp;
            temp.r = this->r - C.r;
            temp.i = this->i - C.i;

            return temp;
        }

        Complex operator*(Complex C){
            Complex temp;
            temp.r = ((this->r*C.r) + (this->i*C.i)*(-1));
            temp.i = ((this->r*C.i) + (this->i*C.r));

            return temp;
        }

        bool operator==(Complex C){
            if((this->r==C.r) && (this->i==C.i))
                return 1;
            else
                return 0;
        }

};

int main(){

    Complex c1(3, -4), c2(5, -6), c3, c4, c5, c6(8, -10);

    c3 = c1+c2;
    c4 = c2-c1;
    c5 = c1*c2;

    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();

    cout<<(c1==c2)<<endl;  // false(0)
    cout<<(c3==c6)<<endl;  // true(1)

    return 0;
}