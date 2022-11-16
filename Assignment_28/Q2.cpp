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
    Complex c1, c2;
    c1.setData(5,6);
    c2.setData(19,-8);

    c1.display();
    c2.display();

    return 0;
}