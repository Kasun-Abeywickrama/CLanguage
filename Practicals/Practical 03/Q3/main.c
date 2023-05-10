#include <stdio.h>
#include <stdlib.h>

int main()
{
    char employeeName[20];
    float basicSalary, newSalary;

    printf("Enter your name  \t: ");
    scanf("%s",&employeeName);

    printf("Enter your basic salary : ");
    scanf("%f",&basicSalary);

    if(basicSalary<5000){
        newSalary = basicSalary + basicSalary*5/100;
    }else if(basicSalary >= 5000 && basicSalary < 10000){
        newSalary = basicSalary + basicSalary*10/100;
    }else if(basicSalary>=10000){
        newSalary = basicSalary + basicSalary*15/100;
    }

    printf("\n");

    printf("Employee Name : %s \t New Salary : %.2f",employeeName,newSalary);

    printf("\n");
    return 0;
}
