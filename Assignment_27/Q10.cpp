#include<iostream>
using namespace std;

class Matrix{

    private:
        int a[3][3];

    public:
        Matrix(){
            cout<<"\nEnter matrix elements:\n";
            for(int i=0; i<3; i++)
                for(int j=0; j<3; j++){
                    cout<<"Enter for index ("<<i<<","<<j<<")"<<": ";
                    cin>>a[i][j];
                }          
        }
        Matrix(int n){
            for(int i=0; i<3; i++)
                for(int j=0; j<3; j++){
                    a[i][j] = n;
                }          
        }

        void displayMatrix(){
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++)
                    cout<<a[i][j]<<"   ";
                cout<<endl;
            }
        }

        Matrix operator+(Matrix m){
            Matrix temp(1);
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++)
                    temp.a[i][j] = this->a[i][j] + m.a[i][j];
            }

            return temp;
        }

};

int main(){
    Matrix m1, m2;

    cout<<"\nFirst Matrix:\n\n";
    m1.displayMatrix();
    cout<<"\nSecond Matrix:\n\n";
    m2.displayMatrix();

    Matrix m = m1+m2;
    cout<<"\nAddition of Matrix:\n\n";
    m.displayMatrix();

    return 0;
}