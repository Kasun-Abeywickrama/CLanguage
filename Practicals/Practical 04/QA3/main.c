#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price, sum=0;
    int number_of_items_200=0;
    int i=0;
    while(i<10){
      printf("Enter the price of item %d\t: ",i+1);
      scanf("%f",&price);
      sum += price;
      if(price>200)
        number_of_items_200 += 1;
      i++;
    }

    printf("\n\nThe average value of an Item \t\t\t\t: %.2f\n",sum/10);
    printf("\nNumber of items which the price is greater than 200 \t: %d\n",number_of_items_200);

    return 0;
}
