#include<iostream>
using namespace std;

class ReverseNumber{

    private:
        int n;
        int rev;

    public:
        void setN(int n){
            this->n = n;
            this->rev = 0;
        }
        int getN(){return this->n;}
        int getRev(){return this->rev;}

        void reverseN(){
            int temp = this->n;
            while(temp){
                short l = temp%10;
                rev = rev*10 + l;
                temp /= 10;
            }
        }
};

int main(){
    ReverseNumber n1, n2, n3;

    n1.setN(123444556);
    n2.setN(578656);
    n3.setN(5467);

    n1.reverseN();
    n2.reverseN();
    n3.reverseN();

    cout<<"Reverse of "<<n1.getN()<<" is "<<n1.getRev()<<endl;
    cout<<"Reverse of "<<n2.getN()<<" is "<<n2.getRev()<<endl;
    cout<<"Reverse of "<<n3.getN()<<" is "<<n3.getRev()<<endl;

    return 0;
}