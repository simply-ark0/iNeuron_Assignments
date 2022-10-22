#include<stdio.h>
#include<limits.h>

int main(){
    int arr[100], n, Larg, s_Larg;
    printf("Enter Size of Array (0<=n<=100): ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    Larg = s_Larg = INT_MIN;
    s_Larg = arr[1];
    for(int i=1; i<n; i++)
        if(arr[i]>Larg){
            s_Larg = Larg;
            Larg = arr[i];
        }
        else if(arr[i]!=Larg && arr[i]>s_Larg)
            s_Larg = arr[i];

    printf("Second largest number in the given array = %d", s_Larg);

    return 0;
}