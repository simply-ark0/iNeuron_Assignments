#include<stdio.h>

struct Marks{
    unsigned int roll_no;
    char name[100];
    unsigned int phy_marks;
    unsigned int chem_marks;
    unsigned int maths_marks;
};

int strLength(char* str){
    int i=0;
    while(str[i])
        i++;
    
    return i;
}


void input(struct Marks *ptr){
    printf("Enter Roll No: ");
    scanf("%d", &ptr->roll_no);

    fflush(stdin);
    printf("Enter name: ");
    fgets(ptr->name, 100, stdin);
    ptr->name[strLength(ptr->name)-1] = '\0';

    printf("Enter Physics marks: ");
    scanf("%u", &ptr->phy_marks);

    printf("Enter Chemistry marks: ");
    scanf("%u", &ptr->chem_marks);

    printf("Enter Maths' marks: ");
    scanf("%u", &ptr->maths_marks);

    printf("\n");
}

void display(struct Marks *ptr) {
    printf("Percentage of ");
    puts(ptr->name);
    printf("%0.2f\n\n", (ptr->phy_marks+ptr->chem_marks+ptr->maths_marks)/3.0);

}

int main(){
    struct Marks students[5];
    for(int i=0; i<5; i++){
        printf("Enter details of student %d:\n", i+1);
        input(&students[i]);
    }

    printf("\n<----------------------------------------------------------------------------------->\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Details of student %d:\n", i + 1);
        display(&students[i]);
    }

    return 0;
}