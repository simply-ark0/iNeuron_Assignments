#include<iostream>
using namespace std;

class Bill{

    private:
        int cust_id;
        string cust_name;
        unsigned int units;

    public:

        Bill(int cust_id, string cust_name, unsigned int units){
            this->cust_id = cust_id;
            this->cust_name = cust_name;
            this->units = units;
        }

        void getDetails(){
            cout<<"Customer id: "<<this->cust_id<<endl;
            cout<<"Customer Name: "<<this->cust_name<<endl;
            cout<<"Units consumed: "<<this->units<<endl;
            cout<<"Bill amount: "<<this->calculateBill()<<endl<<endl;
        }

        int calculateBill(){
            if(this->units<=100)
                return this->units*1.20;
            else if(this->units<=200)
                return 120 + (this->units-100)*2;
            else
                return 520 + (this->units-200)*3;
        }

};

int main(){
    Bill b1(21445, "Arko", 340), b2(43553, "Rahul", 1000), b3(24019, "Bismay", 400);

    b1.getDetails();
    b2.getDetails();
    b3.getDetails();

    return 0;
}