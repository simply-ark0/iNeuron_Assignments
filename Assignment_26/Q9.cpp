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
            double amt = 0.0; 
            unsigned int tempU = this->units;

            if(tempU>100){
                amt = 120;
                tempU -= 100;
            }
            else{
                amt = tempU*1.20;
                return amt;
            }

            if(tempU>100){
                amt += 200;
                tempU -= 100;
            }
            else{
                amt += tempU*2;
                return amt;
            }

            if(tempU!=0)
                amt += tempU*3;

            return amt;
        }

};

int main(){
    Bill b1(21445, "Arko", 340), b2(43553, "Rahul", 1000), b3(24019, "Bismay", 400);

    b1.getDetails();
    b2.getDetails();
    b3.getDetails();

    return 0;
}