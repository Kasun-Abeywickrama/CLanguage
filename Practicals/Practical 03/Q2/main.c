#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf("Input Number 01 : ");
    scanf("%d",&num1);

    printf("Input Number 02 : ");
    scanf("%d",&num2);

    printf("Input Number 03 : ");
    scanf("%d",&num3);

    printf("\n");

    if(num1>num2 && num1>num3)
        printf("Largest value is %d",num1);

    if(num2>num1 && num2>num3)
        printf("Largest value is %d",num2);

    if(num3>num1 && num3>num2)
        printf("Largest value is %d",num3);


    printf("\n");

    if(num1<num2 && num1<num3)
        printf("Lowest value is %d",num1);

    if(num2<num1 && num2<num3)
        printf("Lowest value is %d",num2);

    if(num3<num1 && num3<num2)
        printf("Lowest value is %d",num3);


    printf("\n");
    return 0;
}
