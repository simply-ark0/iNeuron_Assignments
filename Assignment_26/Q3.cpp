#include<iostream>
using namespace std;

class Cube{

    private:
        int a;
    
    public:
        Cube(){
            this->a = 1;
        }

        Cube(int a){ this->a = a; }

        void setA(int a){
            this->a = a;
        }

        int calVol(){
            return a*a*a;
        }
};

int main(){

    Cube c1, c2, c3(5);
    c2.setA(10);

    cout<<"Area of C1 = "<<c1.calVol()<<endl;
    cout<<"Area of C2 = "<<c2.calVol()<<endl;
    cout<<"Area of C3 = "<<c3.calVol()<<endl;

    return 0;

}