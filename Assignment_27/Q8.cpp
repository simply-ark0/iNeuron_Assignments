#include<iostream>
using namespace std;

class Matrix{

    private:
        int a[3][3];

    public:
        Matrix(){
            cout<<"Enter matrix elements:\n";
            for(int i=0; i<3; i++)
                for(int j=0; j<3; j++){
                    cout<<"Enter for index ("<<i<<","<<j<<")"<<": ";
                    cin>>a[i][j];
                }          
        }

        void displayMatrix(){
            cout<<"\nMatrix is:\n";
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++)
                    cout<<a[i][j]<<"   ";
                cout<<endl;
            }
        }

        Matrix operator-(){
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++)
                    a[i][j] = -a[i][j];
            }

            return *this;
        }

};

int main(){
    Matrix m;

    m.displayMatrix();

    // -m;
    // m.displayMatrix();

    Matrix nm = -m;
    nm.displayMatrix();

    return 0;
}