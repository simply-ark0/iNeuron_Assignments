#include<iostream>
using namespace std;
#define RATE 81.13

class Ruppee{

    private:
        float r;
    
    public:
        Ruppee():r(0){}
        Ruppee(float r):r(r){}
        float getR(){return this->r;}

        void display(){
            cout<<"Ruppee: "<<this->r<<endl;
        }


};

class Doller{

    private:
        float d;
    
    public:
        Doller():d(0){}
        Doller(float d):d(d){}
        Doller(Ruppee r){
            this->d = r.getR()/RATE;
        }

        void display(){
            cout<<"Doller: "<<this->d<<endl;
        }

        operator Ruppee(){
            return this->d*RATE;
        }


};


int main(){

    Ruppee r = 23;
    Doller d = r;

    r.display();
    d.display();

    r = d;

    r.display();
    d.display();

    return EXIT_SUCCESS;
}