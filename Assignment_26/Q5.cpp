#include<iostream>
using namespace std;

class Date{

    private:
        short h;
        short m;
        short s;
    
    public:
        Date(){
            this->h = 12;
            this->m = 0;
            this->s = 0;
        }

        void setDate(short h, short m, short s){
            this->h = h;
            this->m = m;
            this->s = s;
        }

        void displayDate(){
            (this->h<10)?(cout<<"[0"<<this->h):(cout<<"["<<this->h);
            cout<<" : ";
            (this->m<10)?(cout<<"0"<<this->m):(cout<<this->m);
            cout<<" : ";
            (this->s<10)?(cout<<"0"<<this->s)<<"]"<<endl:(cout<<this->s)<<"]"<<endl;
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