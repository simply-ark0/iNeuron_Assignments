#include<iostream>
using namespace std;

class Distance{

    private:
        unsigned int feet;
        unsigned int inch;
    
    public:
        Distance(){
            this->feet = 0;
            this->inch = 0;
        }
        Distance(unsigned int feet, unsigned int inch){
            this->feet = feet;
            this->inch = inch;
        }
        void display(){
            cout<<this->feet<<"Feet and "<<this->inch<<"inch"<<endl;
        }
        Distance operator()(unsigned int a, unsigned int b, unsigned int c){
            this->feet = a + c + 5;
            this->inch = a + b +15;

            return *this;
        }
};

int main(){

    Distance d1(2,3), d2(10, 50), d3, d4;
    d3 = d1(4, 5, 6);
    d4 = d2(4, 5, 6);

    d1.display();
    d2.display();
    d3.display();
    d4.display();

    return EXIT_SUCCESS;
}