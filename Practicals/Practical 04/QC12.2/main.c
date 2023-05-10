#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num=0, sum=0;
    while(num!=-1){
        printf("Enter the number : ");
        scanf("%f",&num);
        if(num!=-1)
        sum += num;
    }
    printf("\nThe sum of the numbers : %.2f\n",sum);
    return 0;
}
