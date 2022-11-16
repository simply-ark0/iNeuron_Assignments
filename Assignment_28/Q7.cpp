#include<iostream>
using namespace std;

class Integer{

    private:
        int x;
    
    public:
        Integer(){
            this->x = 0;
        }
        void setX(int x){this->x = x;}
        int getX(){return this->x;}
        Integer operator!(){
            Integer temp;
            temp.x = ~this->x;
            return temp;
        }
};

int main(){
    Integer i1, i2;
    i1.setX(5);
    i2 = !i1;   //shallow copy. As we aren't dealing with pointers, this won't effect.

    cout<<"i1 = "<<i1.getX()<<endl;
    cout<<"i2 = "<<i2.getX()<<endl;

    return 0;

}