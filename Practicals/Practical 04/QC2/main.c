#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark, sum=0;
    float average;
    for(int i=0; i<10; i++){
        printf("Enter mark %d\t: ",i+1);
        scanf("%d",&mark);
        sum += mark;
    }
    printf("\nTotal of marks   : %d\n",sum);
    average = sum/10.0f;
    printf("\nAverage of marks : %.2f\n",average);
    average>50 ? printf("\nPass!\n") : printf("\nfail!\n");
    return 0;
}
