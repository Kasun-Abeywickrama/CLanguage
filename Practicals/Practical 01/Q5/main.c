#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, average;

    printf("Insert num1 :");
    scanf("%f",&num1);

    printf("Insert num2 :");
    scanf("%f",&num2);

    average = (num1+num2)/2;

    printf("\n");
    printf("Average of num1 and num2 is :%f\n",average);

    return 0;
}
