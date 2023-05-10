#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, remainder, multiple;

    printf("Enter the number 01 :");
    scanf("%d",&num1);

    printf("Enter the number 02 :");
    scanf("%d",&num2);

    remainder = num1%num2;

    if(remainder==0){
        printf("\nThe number 01 is a multiple of the number 02\n");
    }else{
        printf("\nThere is no multiples\n");
    }



    return 0;
}
