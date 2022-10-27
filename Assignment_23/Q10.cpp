#include<iostream>
using namespace std;

int main(){
    int arr[10], sum=0;

    for(int i=0; i<10; i++){
        cout<<"Enter value for index "<<i<<": ";
        cin>>arr[i];
        sum += arr[i];
    }
    
    cout<<"Sum of 10 elements in the array = "<<sum;

    return 0;
}