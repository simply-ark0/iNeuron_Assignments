#include<iostream>
using namespace std;

class Fraction{
    
    private:
        long numerator;
        long denominator;

    public:
        Fraction(long numerator=0, long denominator=0){
            this->numerator = numerator;
            this->denominator = denominator;
        }

        friend istream& operator>>(istream&, Fraction&);
        friend ostream& operator<<(ostream&, Fraction&);

        // pre-inc
        Fraction operator++(){
            ++this->numerator;
            ++this->denominator;

            return *this;
        }

        // post-inc
        Fraction operator++(int){
            Fraction temp = *this;
            this->numerator++;
            this->denominator++;

            return temp;
        }

        // pre-dcr
        Fraction operator--(){
            --this->numerator;
            --this->denominator;

            return *this;
        }

        // post-dcr
        Fraction operator--(int){
            Fraction temp = *this;
            this->numerator--;
            this->denominator--;

            return temp;
        }
};

istream& operator>>(istream& input, Fraction& obj){
    cout<<"\nNumerator    :  ";
    input>>obj.numerator;
    cout<<"\nDenominator  :  ";
    input>>obj.denominator;

    return input;
}

ostream& operator<<(ostream& output, Fraction& obj){
    output<<"  :  "<<obj.numerator<<"/"<<obj.denominator<<endl;
    return output;
}

int main(){
    Fraction f1, f2;
    cout<<"f1"<<f1;
    cout<<"f2"<<f2;

    cout<<"Enter 1st Fraction value:"<<endl;
    cin>>f1;

    f1++;
    cout<<"\nf1++"<<f1;
    ++f1;
    cout<<"++f1"<<f1<<endl;

    cout<<"Enter 2nd Fraction value:"<<endl;
    cin>>f2;

    f2 = ++f1;
    cout<<"\nf2 = ++f1"<<endl;
    cout<<"f1"<<f1;
    cout<<"f2"<<f2<<endl;

    f2 = f1++;
    cout<<"f2 = f1++"<<endl;
    cout<<"f1"<<f1;
    cout<<"f2"<<f2<<endl;

    return 0;
}