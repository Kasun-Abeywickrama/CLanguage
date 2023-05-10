#include <stdio.h>
int main() {
    int base, exp;
    float result = 1.0;
    printf("Enter base of the number : ");
    scanf("%d",&base);
    printf("Enter an exponent        : ");
    scanf("%d",&exp);

    while (exp != 0) {
        result *= base;
        exp--;
    }
    printf("Answer = %.0f", result);
    return 0;
}
