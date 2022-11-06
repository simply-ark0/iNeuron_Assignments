#include<iostream>
using namespace std;

class Date{

    private:
        short dd;
        short mm;
        short yy;
    
    public:
        Date(){
            this->dd = 12;
            this->mm = 0;
            this->yy = 0;
        }

        void setDate(short h, short m, short s){
            this->dd = h;
            this->mm = m;
            this->yy = s;
        }

        void displayDate(){
            (this->dd<10)?(cout<<"[0"<<this->dd):(cout<<"["<<this->dd);
            cout<<" : ";
            (this->mm<10)?(cout<<"0"<<this->mm):(cout<<this->mm);
            cout<<" : ";
            (this->yy<10)?(cout<<"200"<<this->yy)<<"]"<<endl:(cout<<"20"<<this->yy)<<"]"<<endl;
        }
};

int main(){
    Date d1, d2, d3;

    d2.setDate(1,2,10);
    d3.setDate(12,0,50);

    d1.displayDate();
    d2.displayDate();
    d3.displayDate();

    return 0;
}