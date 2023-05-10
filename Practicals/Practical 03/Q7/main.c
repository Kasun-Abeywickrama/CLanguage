#include <stdio.h>
#include <stdlib.h>

int main()
{
    int servicePeriod;
    float basicSalary, additionalAllowances, bonus, monthlySales;
    char city;

    printf("\n\t****** Gross monthly remuneration calculator ******\n\n\n");

    printf("Enter your Basic salary \t\t\t\t\t:");
    scanf("%f",&basicSalary);

    printf("Enter your service period in years \t\t\t\t:");
    scanf("%d",&servicePeriod);

    printf("Input 'C' if you are working in Colombo. if not enter the 'N'\t:");
    scanf(" %c",&city);


    printf("How many sales did you make in this month? \t\t\t:");
    scanf("%f",&monthlySales);

    //Calculating additional allowances


    if(servicePeriod>5){
        additionalAllowances = basicSalary*10/100;
    }

    if(city == 'C'){
        additionalAllowances += 2500.00;
    }

     //Calculating bonus

    if(monthlySales>0 && monthlySales<25000){
        bonus = monthlySales*10/100;
    }else if(monthlySales>=25000 && monthlySales<50000){
        bonus = monthlySales*12/100;
    }else if(monthlySales>=50000 ){
        bonus = monthlySales*15/100;
    }

    printf("\n");

    printf("Basic salary : %.2f\t Additional allowance : %.2f\t Bonus : %.2f",basicSalary,additionalAllowances,bonus);

    printf("\n\n");

    printf("Your Gross monthly remuneration is : %.2f",basicSalary+additionalAllowances+bonus);

    printf("\n\n");

    return 0;
}
