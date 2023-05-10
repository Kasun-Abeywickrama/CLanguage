#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rem;
    printf("Input the number : ");
    scanf("%d",&num);

       rem = num%2;
       switch(rem){
            case 0: printf("\nThis number is an even number\n");
            break;
            case 1: printf("\nThis number is an odd number\n");
            break;
            case -1: printf("\nThis number is an odd number\n");
            break;
            default: printf("\nEnter valid number\n");
        }




    return 0;
}
