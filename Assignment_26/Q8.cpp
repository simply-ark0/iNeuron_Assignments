#include<iostream>
using namespace std;

class Bank{

    private:
        long principal;
        unsigned int year;
        static float rate_of_interest;

    public:
        Bank(){
            this->principal = 2000;
            this->year = 0;
        }
        Bank(long principal, unsigned int year){
            this->principal = principal;
            this->year = year;
        }

        void calSI(){
            cout<<"Simple Interest = "<<(this->principal*this->rate_of_interest*this->year)/100.0<<endl;
        }

};

// allocating memory to static variable rate_of_interest:
float Bank::rate_of_interest = 2.5;

int main(){

    Bank a1, a2(12000, 14), a3(500000, 20);

    a1.calSI();
    a2.calSI();
    a3.calSI();

    return 0;
}