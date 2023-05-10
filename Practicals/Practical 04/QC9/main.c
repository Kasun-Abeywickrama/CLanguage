#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("All the ASCII values for letters A to Z \n");
    for(char ch='A'; ch<='Z'; ch++){
        printf("  %c  =  %d\n",ch,ch);
    }
    return 0;
}
