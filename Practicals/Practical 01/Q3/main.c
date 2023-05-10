#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer_number;
    float float_number;
    double double_number;
    char character;

    printf("Input an integer number :");
    scanf("%d",&integer_number);

    printf("Input a float number \t:");
    scanf("%f",&float_number);

    printf("Input a double number \t:");
    scanf("%lf",&double_number);

    printf("Input a character \t:");
    scanf(" %c",&character);

    printf("\n\n");

    printf("Your integer number is \t:%d \n",integer_number);
    printf("Your float number is \t:%f \n",float_number);
    printf("Your double number is \t:%lf% \n",double_number);
    printf("Your character is \t:%c \n",character);

    return 0;
}
