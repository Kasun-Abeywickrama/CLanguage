#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=0, num2=1,var;
    printf("%d  %d  ",num1,num2);
    int i=0;
    for(int i=0; i<8; i++){
        var = num2;
        num2 = num1+num2;
        num1 = var;
        printf("%d  ",num2);
    }
    return 0;
}
