#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0, employeeNo;
    float basicSalary;

    while(1>0){
        printf("Input employee no   : ");
        scanf("%d",&employeeNo);
        if(employeeNo== -999){printf("\n"); break;}
        printf("Basic Salary        : ");
        scanf("%f",&basicSalary);
        printf("\n");
        if(basicSalary>=5000)
            count += 1;
    }
    printf("The number of Employees whose Basic Salary  >=5000 : %d\n",count);
    return 0;
}
