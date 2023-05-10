#include <stdio.h>
#include <stdlib.h>

int main()
{
    int monthNumber;
    printf("Input month's number : ");
    scanf("%d",&monthNumber);
    printf("\n");
    switch(monthNumber){
    case 1:
        printf("This month has 31 days.");
        break;

    case 2:
        printf("This month has 28 days");
        break;

    case 3:
        printf("This month has 31 days");
        break;

    case 4:
        printf("This month has 30 days");
        break;

    case 5:
        printf("This month has 31 days");
        break;

    case 6:
        printf("This month has 30 days");
        break;

    case 7:
        printf("This month has 31 days");
        break;

    case 8:
        printf("This month has 31 days");
        break;

    case 9:
        printf("This month has 30 days");
        break;

    case 10:
        printf("This month has 31 days");
        break;

    case 11:
        printf("This month has 30 days");
        break;

    case 12:
        printf("This month has 31 days");
        break;
    }
    printf("\n");
    return 0;
}
