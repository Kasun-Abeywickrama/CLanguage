#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, number_of_positive=0, number_of_negative=0, number_of_zeros=0,round=0;

    while(round<10){
        printf("Insert number %d \t:  ",round+1);
        scanf("%f",&number);

        if(number==0)
            number_of_zeros += 1;
        else if(number>0)
            number_of_positive += 1;
        else if(number<0)
            number_of_negative += 1;
        round++;
    }

    printf("\n\nNumber of positives : %d \tNumber of negatives : %d \tNumber of zeros : %d\n",number_of_positive,number_of_negative,number_of_zeros);

    return 0;
}
