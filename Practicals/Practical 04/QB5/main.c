#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;
    printf("Input a letter : ");
    scanf(" %c",&letter);
    printf("\n");
    switch(letter){
        case 'A' :
        printf("This character is a vowel letter.");
        break;

        case 'a' :
        printf("This character is a vowel letter.");
        break;

        case 'E' :
        printf("This character is a vowel letter.");
        break;

        case 'e' :
        printf("This character is a vowel letter.");
        break;

        case 'I' :
        printf("This character is a vowel letter.");
        break;

        case 'i' :
        printf("This character is a vowel letter.");
        break;

        case 'O' :
        printf("This character is a vowel letter.");
        break;

        case 'o' :
        printf("This character is a vowel letter.");
        break;

        case 'U' :
        printf("This character is a vowel letter.");
        break;

        case 'u' :
        printf("This character is a vowel letter.");
        break;

        default:
            printf("This character is not a vowel letter.");
    }
    printf("\n");
    return 0;
}
