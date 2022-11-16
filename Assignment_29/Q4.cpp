#include<iostream>
using namespace std;

class Item {
    private:
        int price;
        int quantity;

    public:
        Item():price(0), quantity(0){}
        void setData(int price, int quantity) {
            this->price = price;
            this->quantity = quantity;
        }
        void setPrice(int price){this->price = price;}
        void setQuantity(int quantity){this->quantity = quantity;}
        void display(){
            cout<<"Price = "<<this->price<<endl;
            cout<<"Quantity = "<<this->quantity<<endl;
        }
};

class Product{

    private:
        int price;
        int quantity;
    
    public:
    Product():price(0), quantity(0){}
        void setData(int price, int quantity){
            this->price = price;
            this->quantity = quantity;
        }
        void display(){
            cout<<"Price = "<<this->price<<endl;
            cout<<"Quantity = "<<this->quantity<<endl;
        }

        operator Item(){
            Item temp;
            temp.setPrice(this->price);
            temp.setQuantity(this->quantity);
            return temp; 
        }

};

int main(){

    Item i1;
    Product p1;

    p1.display();
    i1.display();

    p1.setData(3, 4);
    i1 = p1;

    p1.display();
    i1.display();

    return EXIT_SUCCESS;
}