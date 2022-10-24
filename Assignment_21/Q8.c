#include<stdio.h>

struct student{
    unsigned int roll;
    char name[100];
    unsigned short class;
};

int strLength(char* str){
    int i=0;
    while(str[i])
        i++;
    
    return i;
}

void input(struct student *ptr){
    printf("Enter Roll No: ");
    scanf("%d", &ptr->roll);

    fflush(stdin);
    printf("Enter name: ");
    fgets(ptr->name, 100, stdin);
    ptr->name[strLength(ptr->name)-1] = '\0';

    printf("Enter class: ");
    scanf("%hu", &ptr->class);

    printf("\n");
}

void display(struct student *ptr) {
    printf("Roll No: %d\n", ptr->roll);

    printf("Name: ");
    puts(ptr->name);

    printf("class: %hu\n\n", ptr->class);
}

int main(){
    struct student stu[10];
    for(int i=0; i<10; i++){
        printf("Enter details of student %d:\n", i+1);
        input(&stu[i]);
    }

    printf("\n<----------------------------------------------------------------------------------->\n\n");

    for (int i = 0; i < 10; i++) {
        printf("Details of student %d:\n", i + 1);
        display(&stu[i]);
    }

    return 0;
}