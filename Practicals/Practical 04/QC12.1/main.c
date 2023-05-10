#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, last_val=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("\nThe factors of number %d are : ",num);
    for(int i=1; num+1!=i; i++){
        if(num%i==0){
            if(last_val != i && num==i){
                printf("%d \n",i);
            }else if(last_val != i){
                printf("%d, ",i);
            }
            last_val = i;
        }
    }
    return 0;
}
