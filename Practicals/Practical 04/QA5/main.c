#include <stdio.h>
#include <stdlib.h>

int main()
{
    int employeeNumber[10000], hoursWorked, numberOfEmployeesOver4000=0;
    float OT[10000];
    int i=0;
    for(; 1>0; i++){
        printf("Input employee number      : ");
        scanf("%d",&employeeNumber[i]);
        if(employeeNumber[i] == -999){printf("\n"); break;}
        printf("Input the hours you worked : ");
        scanf("%d",&hoursWorked);
        printf("\n");
        OT[i] = (150*hoursWorked);
        if(hoursWorked>40)
        OT[i] += (hoursWorked-40)*200;
        if(OT[i]>4000)
        numberOfEmployeesOver4000++;
    }
    printf("////////////////////////////////////////////////////////////////////////////////////////\n\n");
    for(int j=0; j<i; j++){
        printf("Employee number : %d \tOver Time Payment : %.2f\n\n",employeeNumber[j],OT[j]);
    }
    printf("Percentage of employees whose Over Time Payment exceeding the Rs. 4000/- : %.2f%%\n\n",(float)numberOfEmployeesOver4000/(float)i*100);
    printf("////////////////////////////////////////////////////////////////////////////////////////\n");
    return 0;
}

