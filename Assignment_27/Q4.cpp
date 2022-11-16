#include<iostream>
using namespace std;

class Time{

    private:
        short hour;
        short min;
        short sec;

    public:
        Time(){
            this->hour = 12;
            this->min = 0;
            this->sec = 0;
        }
        Time(short hour, short min, short sec){
            this->hour = hour;
            this->min = min;
            this->sec = sec;
        }
        void normalize(){
            this->min += this->sec/60;
            this->sec %= 60;
            this->hour += this->min/60;
            this->min %= 60;
            this->hour %= 12;
            if(this->hour == 0)
                this->hour = 12;
        }
        friend istream& operator>>(istream&, Time&);
        friend ostream& operator<<(ostream&, Time&);

        bool operator==(Time T){
            if((this->hour == T.hour) && (this->min == T.min) && (this->sec == T.sec))
                return 1;
            else
                return 0;
        }
};

istream& operator>>(istream& input, Time& obj){
    cout<<"--------------------\n";
    cout<<"Enter Hours    :";
    input>>obj.hour;
    cout<<"\nEnter minutes  :";
    input>>obj.min;
    cout<<"\nEnter Seconds  :";
    input>>obj.sec;
    obj.normalize();

    return input;
}

ostream& operator<<(ostream& output, Time& obj){
    output<<"Hours: "<<obj.hour<<endl;
    output<<"Minutes: "<<obj.min<<endl;
    output<<"Seconds: "<<obj.sec<<endl<<endl;

    return output;
}

int main(){

    Time t1, t2;

    cout<<"Enter First Time: "<<endl;
    cin>>t1;
    cout<<"\nFirst Time:\n";
    cout<<t1;
    cout<<"Enter Second Time: "<<endl;
    cin>>t2;
    cout<<"\nSecond Time:\n";
    cout<<t2;

    (t1 == t2) ? cout << "Times are same" << endl
               : cout << "Times are different" << endl;

    return 0;

}