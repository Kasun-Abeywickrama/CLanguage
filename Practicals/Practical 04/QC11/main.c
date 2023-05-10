#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, count=0;
    printf("Enter the number : ");
    scanf("%d",&num);

    if(num==0 || num == 1)
        count = 3;

    for(int i=1; i<=num && count<=2; i++){
        if(num%i==0){
            count++;
        }

    }

    count==2 ? printf("\n%d is a prime number.\n",num):printf("\n%d is not a prime number.\n",num);

    return 0;
}
