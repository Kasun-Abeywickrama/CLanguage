#include <stdio.h>
#include <stdlib.h>

int main()
{
int num, max=0,min=0, count=0,sum=0;

while(count<10){
    printf("Enter student %d's mark\t: ",count+1);
    scanf("%d",&num);
    if(num>max)
        max=num;
    if(num<min)
        min=num;
    sum += num;
    count++;
}

    printf("\nThe maximum mark is\t: %d\n",max);
    printf("The minimum mark is  \t: %d\n",min);
    printf("The average mark is  \t: %.2f\n",sum/10.0f);
    return 0;
}
