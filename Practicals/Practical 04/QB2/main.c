#include <stdio.h>

int main() {
  double num1, num2;
  char op;
  printf("Enter two numbers and Operator like this 1+2 \n");
  printf("\nNumber_1  operator(+ - * /)  Number_2 : ");
  scanf("%lf%c%lf", &num1,&op,&num2);
  printf("\n");
  switch (op) {
    case '+':
      printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
      break;
    case '/':
      if(num2==0){printf("Cannot divide by zero");break;}
      printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
      break;
    default:
      printf("Enter valid operator");
  }
    printf("\n");
  return 0;
}
