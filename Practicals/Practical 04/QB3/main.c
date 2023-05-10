#include <stdio.h>
#include <stdlib.h>

int main()
{
    char task;
    float rad, pi=22/7.f;
    printf("\nSelect the calculation : \n");
    printf(" * To calculate the circumference of a circle : Input 'A'\n");
    printf(" * To calculate the area of a circle          : Input 'B'\n");
    printf(" * To calculate the volume of a sphere        : Input 'C'\n");

    printf("\nEnter What you want        : ");
    scanf(" %c",&task);
    printf("\nEnter radius of the object : ");
    scanf("%f",&rad);

    printf("\n**************** Answer ****************\n\n");

    switch(task){
        case 'A':
        printf("The circumference of a circle : %.2f\n",2*pi*rad);
        break;

        case 'B':
        printf("The area of a circle : %.2f\n",pi*rad*rad);
        break;

        case 'C':
        printf("The volume of a sphere : %.2f\n",(4/3.f)*pi*rad*rad*rad);
        break;

        default:
        printf("Enter valid input...\n");
    }
    return 0;
}
