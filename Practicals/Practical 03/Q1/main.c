#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    printf("Input Number 01 : ");
    scanf("%f",&num1);

    printf("Input Number 02 : ");
    scanf("%f",&num2);

    if(num1>num2){
        printf("\nHighest number is number 01\n");
    }else{
         printf("\nHighest number is number 02\n");
    }

    return 0;
}
