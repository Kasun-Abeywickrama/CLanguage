#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    printf("Enter an uppercase letter, lowercase letter, digit or special symbol \t: ");
    scanf(" %c",&input);

    printf("\nThe integer equivalents of %c that you have entered is \t\t\t: %d\n",input,input);

    return 0;
}
