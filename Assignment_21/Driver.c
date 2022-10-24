#include<stdio.h>
#include "Q6.c"

int main(){
    int n;
    printf("Enter number of Employees: ");
    scanf("%d", &n);

    struct employee emp[n];

    input(emp, n);

    printf("\n<----------------------------------------------------------------------------------->\n\n");

    display(emp, n);

    printf("Highest salaried Employee: ");
    puts(emp[highestSalary(emp, n)].name);
    printf("With a salary of: %d\n\n", emp[highestSalary(emp, n)].salary);
    printf("\n<----------------------------------------------------------------------------------->\n\n");

    printf("-:Sorted according to salary:- \n");
    salarySort(emp, n);
    display(emp, n);

    printf("-:Sorted according to Name:- \n");
    nameSort(emp, n);
    display(emp, n);

    return 0;

}