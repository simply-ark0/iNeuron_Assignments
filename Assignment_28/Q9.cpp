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
        operator int() const{
            return this->x;
        }
};


int main(){
    Integer x1;
    x1.setX(20);
    // int n = x1; //it'll also work!
    int n = int(x1);
    cout<<n;

    return 0;
}