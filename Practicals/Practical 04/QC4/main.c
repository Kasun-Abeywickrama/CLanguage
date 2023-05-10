#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,num_copy,rem, sum=0;
    printf("Enter the number : ");
    scanf("%d",&number);
    num_copy=number;
    while(number!=0){
        rem = number%10;
        sum +=  rem;
        number /= 10;
    }
    printf("\nSum of digits of %d = %d\n",num_copy,sum);

    return 0;
}
