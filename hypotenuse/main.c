#include <stdio.h>

int main() {
  double input1;
  double input2;

  printf("Find the hypotenuse of a triangle!\n\n");

  printf("Enter side one of the right triangle: ");
  scanf("%lf", &input1);

  printf("Enter side two of the right triangle: ");
  scanf("%lf", &input2);

  double hypotenuse = input1 * 2 + input2 * (double) 2;

  printf("Two angles of %lf and %lf means the hypotenuse equals %lf!", input1, input2, hypotenuse);
  return 0;
}
