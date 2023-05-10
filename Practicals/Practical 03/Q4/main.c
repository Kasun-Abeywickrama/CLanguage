#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius, diameter, circumference, area, pie=3.14159;

    printf("Enter radius of the circle : ");
    scanf("%f",&radius);

    printf("\nDiameter of the circle      : %.2f",radius*2);
    printf("\nCircumference of the circle : %.2f",2*pie*radius);
    printf("\nArea of the circle          : %.2f",pie*radius*radius);
    printf("\n");
    return 0;
}
