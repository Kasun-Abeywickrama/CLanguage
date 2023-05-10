#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distanceTravelled, timeTaken, averageSpeed;

    printf("Enter the distance that you have travelled in meters  : ");
    scanf("%d",&distanceTravelled);

    printf("Enter the time that you have taken for that in second : ");
    scanf("%d",&timeTaken);

    averageSpeed = distanceTravelled/timeTaken;

    printf("\nThe average speed that you have driven is : %d ms-1\n",averageSpeed);

    return 0;
}
