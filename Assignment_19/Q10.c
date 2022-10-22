#include<stdio.h>
#include<string.h>

short strLength(char *str){
    int i=0;
    while(str[i])
        i++;
    return i;
}

short checkSpecial(char c){
    char spcialChars[] = {33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 58, 59, 60, 61, 62,
                          63, 64, 91, 92, 93, 94, 95, 96, 123, 134, 125, 126};
    int l = 0, r = 31;
    while(l<=r){
        int mid = (l+r)/2;
        if(spcialChars[mid] == c)
            return 1;
        else if(spcialChars[mid]<c)
            l = mid+1;
        else
            r = mid-1;  
    }
    return 0;

}

short authName(char *name){
    return (name[0]>=65 && name[0]<=90) || (name[0]>=97 && name[0]<=122);
}

short authPassword(char *str){
    short special=0, num=0, lower=0, upper=0;
    if(strLength(str)<10)
        return 0;
    for(int i=0; i<strLength(str); i++){
        if(str[i]>=65 && str[i]<=90)
            upper++;
        else if(str[i]>=97 && str[i]<=122)
            lower++;
        else if(str[i]>=48 && str[i]<=57)
            num++;
        else if(checkSpecial(str[i]))
            special++;
    }

    return special && num && lower && upper;
}

short authPhone(char *str){
    int i;
    for(i=0; i<strLength(str); i++)
        if(!(str[i]>=48 && str[i]<=57))
            return 0;
    if(i!=10)
        return 0;

    return 1;

}

short authEmail(char *str){
    int i=0, att = 0, dot = 0;
    while(str[i]){
        if(str[i] == '@')
            att++;
        else if(str[i] == '.')
            dot++;
        i++;
    }
    if(dot && (att==1))
        return 1;
    return 0;
}

int main(){
    char name[100], password[100], email[50], phone[20], opt;
    do{
        do{
            printf("Enter your Name: ");
            fgets(name, 100, stdin);
            name[strLength(name)-1] = '\0';
            if(!authName(name))
                printf("ERROR! Name cannot be empty\n");
        }while(!authName(name));
        do{
            printf("Enter your Password: ");
            fgets(password, 100, stdin);
            password[strLength(password)-1] = '\0';
            if(!authPassword(password))
                printf("ERROR! Password should atleast be of length 10 and should consist of 1 uppercase, 1 lowercase, 1 numerical and 1 special character.\n");
        }while(!authPassword(password));

        do{
            printf("Enter your Phone Number: ");
            fgets(phone, 100, stdin);
            phone[strLength(phone)-1] = '\0';
            if(!authPhone(phone))
                printf("ERROR! Phone Numeber should only consist of numerical values and length should be 10\n");
        }while(!authPhone(phone));

        do{
            printf("Enter your Email id: ");
            fgets(email, 50, stdin);
            email[strLength(email)-1] = '\0';
            if(!authEmail(email))
                printf("ERROR! Entered Email id is not valid!\n");
        }while(!authEmail(email));

        printf("Do you want to enter again?[Y/N]: ");
        scanf("%c", &opt);
    }while(opt == 'Y');

    return 0;
}