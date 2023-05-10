#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,rev=0;
    printf("Enter a number for find reverse : ");
    scanf("%d",&num);

    do{
        rev = (rev*10)+(num%10);
        num/=10;
    }while(num!=0);
    printf("Reverse of the given number \t: %d",rev);
    return 0;
}
