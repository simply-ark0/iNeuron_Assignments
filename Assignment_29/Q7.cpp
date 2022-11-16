#include<iostream>
using namespace std;

class Minute{

    private:
        int min;

    public:
        Minute():min(0){}
        Minute(int min):min(min){}
        void setMin(int min){this->min = min;}

        void display(){
            cout<<"Minute: "<<this->min<<endl;
        }
};

class Time{

    private:
        int hour;
        int min;

    public:
        Time():hour(0), min(0){}
        Time(int hour, int min):hour(hour), min(min){}

        void display(){
            (this->hour<10)?(cout<<"[0"<<this->hour<<" : "):(cout<<"["<<this->hour<<" : ");
            (this->min<10)?(cout<<"0"<<this->min<<"]"<<endl):(cout<<this->min<<"]"<<endl);
        }

        operator Minute(){
            Minute temp;
            temp.setMin(this->min);
            return temp;
        }
};

int main(){

    Time t1(2, 30);
    t1.display();
    Minute m1;
    m1.display();
    m1 = t1; 
    t1.display();
    m1.display();
    
    return EXIT_SUCCESS;

// Fetch minute from time
}