#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, total;

    printf("Enter number 1 :");
    scanf("%d",&num1);

    printf("Enter number 2 :");
    scanf("%d",&num2);

    total = num1 + num2;

    printf("\n");
    printf("Total of num1 and num2 is :%d",total);

    return 0;
}
