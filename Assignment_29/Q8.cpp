#include<iostream>
using namespace std;

class Rupee{

    private:
        int r;

    public:
        Rupee():r(0){};
        Rupee(int r):r(r){}

        operator int(){
            return this->r;
        }
};

int main(){

    Rupee r = 10;
    int x = r;
    cout << x;
    
    return EXIT_SUCCESS;
}