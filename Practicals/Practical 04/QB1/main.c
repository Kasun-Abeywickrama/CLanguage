#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Input a number : ");
    scanf("%d",&num);

        if(num%2==0){
            printf("\nThis number is an even number\n");
        }else{
            printf("\nThis number is an odd number\n");
        }
    return 0;
}
