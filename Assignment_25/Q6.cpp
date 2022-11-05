#include<iostream>
using namespace std;

class Square{

    private:
        int n;
        int sq;
        static unsigned int count;

    public:
        void setN(int n){
            this->n = n;
        }
        int getN(){return this->n;}
        int getSq(){return this->sq;}
        void calSquare(){
            count++;
            this->sq = this->n*this->n;
        }
        static int getCount(){
            return count;
        }

};

unsigned int Square::count = 0;

int main(){
    Square s1, s2, s3, s4;

    s1.setN(4);
    s2.setN(5);
    s3.setN(6);
    s4.setN(7);

    s1.calSquare();
    s2.calSquare();
    s3.calSquare();
    s4.calSquare();

    cout<<"Square of "<<s1.getN()<<" = "<<s1.getSq()<<endl;
    cout<<"Square of "<<s2.getN()<<" = "<<s2.getSq()<<endl;
    cout<<"Square of "<<s3.getN()<<" = "<<s3.getSq()<<endl;
    cout<<"Square of "<<s4.getN()<<" = "<<s4.getSq()<<endl;

    cout<<"Number of times functions is called = "<<Square::getCount();

    return 0;
}