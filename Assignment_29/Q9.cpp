#include<iostream>
using namespace std;

class Doller{

    private:
        int d;
    
    public:
        Doller():d(0){}
        Doller(int d):d(d){}

        void display(){
            cout<<"Doller: "<<this->d<<endl;
        }

        void operator=(int x){      // deep copy
            this->d = x;
        }


};

int main(){

    int x = 50;
    Doller d;
    d = x;
    d.display();
    
    return EXIT_SUCCESS;
}