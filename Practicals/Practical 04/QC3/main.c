#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,fact=1;
    printf("Enter a number : ");
    scanf("%d",&num);
        for(int i=1; i<=num; i++){
                fact *= i;
        }
        printf("\nThe factorial of the number %d is : %d",num,fact);
    printf("\n");
    return 0;
}
