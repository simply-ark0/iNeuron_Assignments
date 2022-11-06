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
        
        // pre-inc
        Complex operator++(){
            Complex temp;
            temp.r = ++this->r;
            temp.i = ++this->i;

            return temp;
        }

        // post-inc
        Complex operator++(int){
            Complex temp;
            temp.r = this->r++;
            temp.i = this->i++;

            return temp;
        }

        // pre-dcr
        Complex operator--(){
            Complex temp;
            temp.r = --this->r;
            temp.i = --this->i;

            return temp;
        }

        // post-dcr
        Complex operator--(int){
            Complex temp;
            temp.r = this->r--;
            temp.i = this->i--;

            return temp;
        }

};

int main(){
    Complex c1(4, 5), c2(6, 7);
    c1++;
    c1.display();
    ++c2;
    c2.display();

    Complex c3 = ++c1;
    c3.display();
    Complex c4 = c2++;
    c4.display();
}