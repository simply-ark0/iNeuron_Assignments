#include<iostream>
using namespace std;

class Time{

    private:
        short hour;
        short min;
        short sec; 

    public:
        void setTime(short hour, short min, short sec){
            this->hour = hour;
            this->min = min;
            this->sec = sec;
        }
        void displayTime(){
            cout<<hour<<" : "<<min<<" : "<<sec<<endl;
        }
};

int main(){
    Time t1, t2, t3;
    t1.setTime(12, 14, 55);
    t2.setTime(1, 20, 50);
    t3.setTime(2, 44, 45);

    t1.displayTime();
    t2.displayTime();
    t3.displayTime();

    return 0;
}