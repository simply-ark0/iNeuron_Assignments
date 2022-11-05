#include<iostream>
using namespace std;

class LargestNumber{

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

        void calLargest(){
            this->max = ((n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3));
        }
};

int main(){
    LargestNumber l1, l2, l3;
    l1.setValues(3,3,3);
    l2.setValues(10,10,9);
    l3.setValues(10,99, 1000);

    l1.calLargest();
    l2.calLargest();
    l3.calLargest();

    cout<<"Largest of 3 numbers: "<<l1.getMax()<<endl;
    cout<<"Largest of 3 numbers: "<<l2.getMax()<<endl;
    cout<<"Largest of 3 numbers: "<<l3.getMax()<<endl;

    return 0;
}