#include<iostream>
using namespace std;

class Factorial{

    private:
        int n;
        int fact;
    
    public:
        Factorial(){
            this->n = 1;
            this->fact = 1;
        }
        void setN(int n){this->n = n;}
        int getN(){return this->n;}
        int getFact(){return this->fact;}

        void calFact(){
            if(this->n == 0){
                this->fact = 1;
                return;
            }
            for(int i=1; i<=n; i++)
                this->fact *= i;

        }
};

int main(){
    Factorial f1, f2;
    f1.setN(5);
    f2.setN(7);

    f1.calFact();
    f2.calFact();

    cout<<"Factorial of "<<f1.getN()<<" = "<<f1.getFact()<<endl;
    cout<<"Factorial of "<<f2.getN()<<" = "<<f2.getFact()<<endl;

    return 0;
}