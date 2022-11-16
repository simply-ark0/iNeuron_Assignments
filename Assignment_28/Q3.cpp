#include<iostream>
using namespace std;

class Array{

    private:
        int *arr;
        int size;
    
    public:
        Array(){
            arr = (int*)malloc(sizeof(int));
            size = 1;
        }
        Array(int size){
            arr = (int*)malloc(size*sizeof(int));
            this->size = size;
        }
        Array(int num, int size){
            arr = (int*)malloc(size*sizeof(int));
            this->size = size;
            for(int i=0; i<size; i++)
                arr[i] = num;
        }
        void inputValue(int n, int index){
            if(index>this->size-1){
                cout<<"Index out of Bound exception.\n";
                exit(EXIT_FAILURE);
            }
            this->arr[index] = n;
        }
        void displayArray(){
            cout<<"[";
            for(int i=0; i<this->size; i++)
                if(i == this->size-1)
                    cout<<this->arr[i]<<"]"<<endl;
                else
                    cout<<this->arr[i]<<", ";
        }
        int operator[](int index){
            if(index>this->size-1){
                cout<<"Index out of Bound exception.\n";
                exit(EXIT_FAILURE);
            }
            return this->arr[index];
        }
    
};

int main(){
    Array arr1(10);
    for(int i=0; i<10; i++)
        arr1.inputValue(i*10, i);

    arr1.displayArray();

    cout<<arr1[2];      // arr1.operator[](2);

    return EXIT_SUCCESS;
}