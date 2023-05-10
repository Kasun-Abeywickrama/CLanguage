#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1; i<=5; i++){
        for(int j=i; j>0; --j){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
