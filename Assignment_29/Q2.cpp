#include<iostream>
using namespace std;

class Complex{

    private:
        int real;
        int img;

    public:
        Complex():real(0), img(0){}
        Complex(int real, int img):real(real), img(img){}
        void setData(int real, int img){
            this->real = real;
            this->img = img;
        }
        void display(){
            cout<<"["<<this->real;
            (this->img>0)?(cout<<" + "<<this->img<<"i]"<<endl):(cout<<" - "<<-this->img<<"i]"<<endl);
        }
        operator int(){
            return this->real;
        }
};

int main(){

    Complex c1;
    c1.setData(3, 4);
    c1.display();

    int x;
    x = c1;
    cout<<"x = "<<x<<endl;

    return EXIT_SUCCESS;
}
