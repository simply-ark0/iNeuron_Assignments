#include<iostream>
using namespace std;

class Time{

    private:
        short hour;
        short min;
        short sec;

    public:
        Time():hour(0), min(0), sec(0){}
        Time(int hour, int min, int sec):hour(hour), min(min), sec(sec){}
        Time(int duration):hour(0), min(0), sec(0){
            this->sec = duration%60;
            if(duration>=60)
                this->min = duration/60;
            if(this->min>=60){
                this->hour = min/60;
                this->min %= 60;
            }
            
        }

        void display(){
            (this->hour<10)?(cout<<"[0"<<this->hour<<" : "):(cout<<"["<<this->hour<<" : ");
            (this->min<10)?(cout<<"0"<<this->min<<" : "):(cout<<this->min<<" : ");
            (this->sec<10)?(cout<<"0"<<this->sec<<"]"<<endl):(cout<<this->sec<<"]"<<endl);
        }

};

int main(){
    
    int duration;
    cout <<"Enter time duration in Seconds: ";
    cin >> duration;

    Time t1 = duration;
    t1.display();


    return EXIT_SUCCESS;
}