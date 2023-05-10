#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, x;

    printf("Enter number 01 :");
    scanf("%d",&num1);

    printf("Enter number 02 :");
    scanf("%d",&num2);


    printf("\nBefore swapping");
    printf("\nValue of number 01 is :%d",num1);
    printf("\nValue of number 02 is :%d",num2);

    //swapping

    x = num1;
    num1 = num2;
    num2 = x;


    printf("\n\nAfter swapping");
    printf("\nValue of number 01 is :%d",num1);
    printf("\nValue of number 02 is :%d",num2);

    printf("\n");
    return 0;
}
