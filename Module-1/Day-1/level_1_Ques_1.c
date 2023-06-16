#include <stdio.h>

int find_biggest(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int main() {
  int a, b;

  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  int biggest = find_biggest(a, b);

  printf("The biggest number is %d.\n", biggest);

  return 0;
}

