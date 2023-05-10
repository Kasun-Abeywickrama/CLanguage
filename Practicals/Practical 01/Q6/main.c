#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    char studentName[20];
    int birthYear;
    printf("Input student name :");
    scanf("%s",&studentName);

    printf("Input birth year   :");
    scanf("%d",&birthYear);

    printf("\n");
    printf("Name : %s \t age : %d",studentName,2023-birthYear);
    printf("\n");

    return 0;
}
