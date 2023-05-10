#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F , C;
    printf("Input temperature in Fahrenheit : ");
    scanf("%f",&F);

    C = (5/9.0f)*(F-32);

    printf("\nThe temperatuer in Celsius \t: %.2f",C);
    printf("\n");

    return 0;
}
