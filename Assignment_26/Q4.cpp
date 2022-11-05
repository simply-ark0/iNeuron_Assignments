#include<iostream>
using namespace std;

class Counter{
    
    private:
        int count;

    public:
        Counter(){
            this->count = 0;
        }

        void incCount(){
            this->count++;
        }

        void showCount(){
            cout<<"Count = "<<this->count<<endl;
        }
};

int main(){
    Counter c;
    c.showCount();

    c.incCount();
    c.showCount();

    c.incCount();
    c.showCount();

    return 0;

}