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
        friend ostream& operator<<(ostream&, Complex&);
        friend istream& operator>>(istream&, Complex&);
};

ostream& operator<<(ostream &output, Complex &C){
    output<<"["<<C.real;
    (C.img>0)?(output<<" + "<<C.img<<"i]"<<endl):(output<<" - "<<-C.img<<"i]"<<endl);

    return output;
}
istream& operator>>(istream &input, Complex &C){
    cout<<"Enter Real part: ";
    input>>C.real;
    cout<<"Enter Imaginary part: ";
    input>>C.img;

    return input;
}

int main(){

    Complex c1(2,3), c2, c3;
    cin>>c2>>c3;
    cout<<c1<<c2<<c3;

    return EXIT_SUCCESS;

}