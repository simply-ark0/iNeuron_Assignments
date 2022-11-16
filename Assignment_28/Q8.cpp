#include<iostream>
using namespace std;

class Coord3D{

    private:
        int x, y, z;
    
    public:
        Coord3D(){this->x = this->y = this->z = 0;}
        Coord3D(int x, int y, int z){
            this->x = x;
            this->y = y;
            this->z = z;
        }
        void display(){
            cout<<"x = "<<this->x<<endl;
            cout<<"y = "<<this->y<<endl;
            cout<<"z = "<<this->z<<endl;
        }
        // overloading comma(,) operator
        Coord3D operator,(Coord3D C){
            Coord3D temp;
            temp.x = C.x;
            temp.y = C.y;
            temp.z = C.z;
            return temp;
        }
};

int main(){

    Coord3D c1(1,2,3), c2(4,5,6), c3(7,8,9);
    
    c1.display();
    c2.display();
    c3.display();

    c3 = (c1,c2); // c3 = c1.operator,(c2);

    c3.display();

    return EXIT_SUCCESS;
}