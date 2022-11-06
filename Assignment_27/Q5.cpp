#include<iostream>
using namespace std;

class Numbers{

    private:
        int x, y, z;
    
    public:
        Numbers(){
            this->x = 0;
            this->y = 0;
            this->z = 0;
        }
        Numbers(int x, int y, int z){
            this->x = x;
            this->y = y;
            this->z = z;
        }

        void printValues(){
            cout<<"x = "<<this->x<<endl;
            cout<<"y = "<<this->y<<endl;
            cout<<"z = "<<this->z<<endl<<endl;
        }

        Numbers operator-(){
            // Numbers temp;
            this->x = -this->x;
            this->y = -this->y;
            this->z = -this->z;

            // temp.x = this->x;
            // temp.y = this->y;
            // temp.z = this->z;

            // return temp;
            return *this;
        }
};

int main(){
    Numbers n1(2, 3, 4), n2(4, 5, 6);
    n1.printValues();
    n2.printValues();

    // -n1;
    // -n2;

    // n1.printValues();
    // n2.printValues();

    Numbers n3 = -n1;
    Numbers n4 = -n2;

    n3.printValues();
    n4.printValues();

    return 0;
}