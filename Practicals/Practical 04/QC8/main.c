#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, num,rem=0, z=0;
    printf("Enter the number : ");
    scanf("%d",&number);

    for(int i=0; i<1000; i++){
        int res=0;
        for(num = number; num!=0; num= num/10){
             rem = num%10;
             int mul=1;
             for(int j=i; j!=0; --j){
                mul *= rem;
             }
             res += mul;
        }
        if(number == res){
            printf("\n%d is an Armstrong number\n",number);
            z=1;
            break;
        }
    }
    if(z == 0){
            printf("\n%d is not an Armstrong number\n",number);
        }
    return 0;
}
