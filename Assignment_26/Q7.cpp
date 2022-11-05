#include<iostream>
using namespace std;

class Box{

    private:
        short l;
        short b;
        short h;

    public:
        Box(){
            this->l = 1;
            this->b = 1;
            this->h = 1;
        }

        Box(short l, short b, short h){
            this->l = l;
            this->b = b;
            this->h = h;
        }

        void calVol(){
            cout<<"Volume = "<<this->l*this->b*this->h<<endl;
        }
};

int main(){
    Box b1, b2(12, 13, 14), b3(2, 3, 4);

    b1.calVol();
    b2.calVol();
    b3.calVol();

    return 0;
}