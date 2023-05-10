#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10] ,count=0;
    for(int i=0; i<10; i++){
        printf("Enter number %d\t: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("\n\n");
    for(int i=0; i<10; i++){
        printf("The number %d is : %d\n",i+1,num[i]);
    }

    printf("\n\n");
    for(int i=0; i<10; i++){
        if(num[i]%2==0)
            count++;
    }
    printf("The number of even number is : %d\n",count);

    return 0;
}
