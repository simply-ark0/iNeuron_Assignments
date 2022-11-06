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
            // int carry = 0;
            // while(this->s>=60){
            //     this->s -= 60;
            //     carry++;
            // }
            // this->m += carry;
            // carry = 0;

            // while(this->m>=60){
            //     this->m -= 60;
            //     carry++;
            // }
            // this->h += carry;
            // carry = 0;

            // while(this->h>12)
            //     this->h -= 12;

            // Dope way!
            this->m += this->s/60;
            this->s = this->s%60;
            
            this->h += this->m/60;
            this->m = this->m%60;

            this->h = this->h%12;

        }
        Time add(Time T){
            Time temp;
            temp.h = this->h + T.h;
            temp.m = this->m + T.m;
            temp.s = this->s + T.s;
            temp.normalize();

            return temp;
        }
    
};

int main(){

    Time t1, t2, t3, t4;

    t1.setTime(8, 44, 47);
    t2.setTime(9, 30, 25);
    t3.setTime(44, 67, 60);
    t3.normalize();

    t4 = t1.add(t2);

    t1.showTime();
    t2.showTime();
    t3.showTime();
    t4.showTime();

    return 0;
}