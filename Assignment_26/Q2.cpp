#include<iostream>
using namespace std;

class Time{

    private:
        short h;
        short m;
        short s;

    public:
        void setTime(int h, int m, int s){
            this->h = h;
            this->m = m;
            this->s = s;
        }
        void showTime(){
            (this->h<10)?(cout<<"[0"<<this->h):(cout<<"["<<this->h);
            cout<<" : ";
            (this->m<10)?(cout<<"0"<<this->m):(cout<<this->m);
            cout<<" : ";
            (this->s<10)?(cout<<"0"<<this->s)<<"]"<<endl:(cout<<this->s)<<"]"<<endl;
        }
        void normalize(){

        }
        Time add(Time T){
            Time temp;
            int carry = 0;

            temp.s = T.s + this->s;

            if(temp.s>60){
                carry++;
                temp.s -= 60;
            }

            temp.m = T.m + this->m;
            if(carry){
                temp.m++;
                carry--;
            }

            if(temp.m>60){
                carry++;
                temp.m -= 60;
            }

            temp.h = T.h + this->h;
            if(temp.h>12)
                temp.h -= 12;

            if(carry)
                temp.h++;

            return temp;

        }
    
};

int main(){

    Time t1, t2, t3;

    t1.setTime(11, 44, 47);
    t2.setTime(9, 30, 25);
    t3 = t1.add(t2);

    t1.showTime();
    t2.showTime();
    t3.showTime();

    return 0;
}