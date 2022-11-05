#include<iostream>
using namespace std;

class StaticCount{

    private:
        static unsigned int count;

    public:
        StaticCount(){
            this->count = 0;
        }

        void inc_count(){
            this->count++;
        }

        void displayCount(){
            cout<<"Count = "<<this->count<<endl;
        }

};

// allocating memory to static variable count
unsigned int StaticCount::count = 0;

int main(){
    StaticCount s;

    // calling 3 times:
    s.inc_count();
    s.inc_count();
    s.inc_count();

    s.displayCount();

    return 0;
}