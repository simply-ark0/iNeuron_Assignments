#include<iostream>
using namespace std;

class Invent1{

    private:
        float data1;
        float data2;

    public:
        Invent1():data1(0), data2(0){}
        Invent1(float data1, float data2):data1(data1), data2(data2){}

        float getData1(){return this->data1;}
        float getData2(){return this->data2;}

        void display(){
            cout<<"Data_1 = "<<this->data1<<endl;
            cout<<"Data_2 = "<<this->data2<<endl;
        }

        operator float(){
            return (this->data1/this->data2)*100.0;
        }
};

class Invent2{

    private:
        float data1;
        float data2;

    public:
        Invent2():data1(0), data2(0){}
        Invent2(float data1, float data2):data1(data1), data2(data2){}
        Invent2(Invent1 i){
            this->data1 = i.getData1();
            this->data2 = i.getData2();
        }

        void display(){
            cout<<"Data_1 = "<<this->data1<<endl;
            cout<<"Data_2 = "<<this->data2<<endl;
        }
};

int main(){

    Invent1 s1(4, 5);
    Invent2 d1;
    s1.display();
    d1.display();

    float tv;
    tv = s1;
    d1 = s1;

    cout<<"tv = "<<tv<<endl;
    d1.display();
    
    return EXIT_SUCCESS;
}

