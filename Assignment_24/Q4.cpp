#include<iostream>
using namespace std;

int fact(int n){
    if(n==0 || n==1)
        return 1;

    return n*fact(n-1);
}

int factLim(int n, int r){
    if(r>n)
        return 1;
    if(n == r)
        return n;

    return n*factLim(n-1, r);
}

void pascalTriangle(int n){

    // pattern:
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++)
            cout<<" ";
        for(int k=0; k<=i; k++){
            int r = ((i-k)<k)?(i-k):k;
            cout<<factLim(i, i-r+1)/fact(r)<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int n, r;

    cout<<"Enter number of rows: ";
    cin>>n;

    pascalTriangle(n);

    return 0;
}