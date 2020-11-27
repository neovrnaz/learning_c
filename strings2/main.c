#include <stdio.h>

int factorial(int number) {
  int factorial = 1;
  for (int i = number; i > 1; i--) {
    factorial *= i;
  }
  return factorial;
}

void output() {
  int input;
  scanf("%d", &input);
  printf("The factorial of %d is %d:", input, factorial(input));
}

int main() {
  printf("Enter a number that you would like to find the factorial of: ");
  output();
  return 0;
}
