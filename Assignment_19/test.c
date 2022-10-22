#include<stdio.h>
#include<math.h>

void swap(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main(){
   
    char spcialChars[] = {33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 58, 59, 60, 61, 62,
                          63, 64, 91, 92, 93, 94, 95, 96, 123, 134, 125, 126};
    int l = 0, r = 31, flag = 0;
    char key = ')';
    while(l<r){
        int mid = (l+r)/2;
        if(spcialChars[mid] == key){
            flag = 1;
            break;
        }
        else if(spcialChars[mid]<key)
            l = mid+1;
        else
            r = mid-1;  
    }
    printf("%d", flag);

    return 0;
}