#include<iostream>
using namespace std;

class Cube{

    private:
        int a;
    
    public:
        Cube(){
            this->a = 1;
        }

        void setA(int a){
            this->a = a;
        }

        int calArea(){
            return a*a*a;
        }
};

int main(){

    Cube c1, c2;
    c2.setA(10);

    cout<<"Area of C1 = "<<c1.calArea()<<endl;
    cout<<"Area of C2 = "<<c2.calArea()<<endl;

    return 0;

}