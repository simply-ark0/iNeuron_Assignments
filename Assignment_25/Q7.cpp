#include<iostream>
using namespace std;

class Greatest{

    private:
        int n1;
        int n2;
        int n3;
        int max;

    public: 
        void setValues(int n1, int n2, int n3){
            this->n1 = n1;
            this->n2 = n2;
            this->n3 = n3;
        }
        int getMax(){return this->max;}

        void calGreatest(){
            this->max = ((n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3));
        }
};

int main(){
    Greatest l1, l2, l3;
    l1.setValues(2,3,-10);
    l2.setValues(-10,10,-90);
    l3.setValues(-1,-99, -1000);

    l1.calGreatest();
    l2.calGreatest();
    l3.calGreatest();

    cout<<"Greatest of 3 numbers: "<<l1.getMax()<<endl;
    cout<<"Greatest of 3 numbers: "<<l2.getMax()<<endl;
    cout<<"Greatest of 3 numbers: "<<l3.getMax()<<endl;

    return 0;
}