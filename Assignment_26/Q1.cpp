#include<iostream>
using namespace std;

class Complex{
    
    private:
        int a;
        int b;

    public:
        void setData(int a, int b){
            this->a = a;
            this->b = b;
        }

        void showData(){
            cout<<"["<<a<<" + "<<b<<"i]"<<endl;
        }

        Complex add(Complex C){
            Complex temp;
            temp.a = this->a + C.a;
            temp.b = this->b + C.b;

            return temp;
        }
};

int main(){

    Complex c1, c2, c3;

    c1.setData(2,3);
    c2.setData(7,9);

    c3 = c1.add(c2);

    c1.showData();
    c2.showData();
    c3.showData();
}