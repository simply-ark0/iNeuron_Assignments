#include<iostream>
using namespace std;

class Marks{

    private:
        int marks;
    public:
        Marks(){
            this->marks = 0;
        }
        Marks(int marks){
            this->marks = marks;
        }
        void printMarks(){
            cout<<"Marks = "<<this->marks<<endl;
        }
        
        Marks *operator->(){
            return this;
        }

};

int main(){ // m.getmarks(); m->getMarks();

    Marks m1(70);
    m1.printMarks();
    m1->printMarks(); //After resolving: (pointer)->printMarks();

    return EXIT_SUCCESS;

}