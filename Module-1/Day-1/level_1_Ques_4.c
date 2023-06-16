#include <stdio.h>

int main() {
  float op1, op2;
  char operator;

  printf("Enter Number1: ");
  scanf("%f", &op1);

  printf("Enter the operator: ");
  scanf(" %c", &operator);

  printf("Enter Number2: ");
  scanf("%f", &op2);

  float result;

  switch (operator) {
    case '+':
      result = op1 + op2;
      break;
    case '-':
      result = op1 - op2;
      break;
    case '*':
      result = op1 * op2;
      break;
    case '/':
      result = op1 / op2;
      break;
    default:
      printf("Invalid operator.\n");
      return 1;
  }

  printf("Result: %.2f\n", result);

  return 0;
}

