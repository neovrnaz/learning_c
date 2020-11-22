#include <stdio.h>
#include <math.h>

int main() {
  int side1;
  int side2;
  int cSquared;
  int hypotenuse;

  printf("Find the hypotenuse of a triangle!\n\n");

  printf("Enter side one of the right triangle: ");
  scanf("%i", &side1);

  printf("Enter side two of the right triangle: ");
  scanf("%i", &side2);

  cSquared = side1 * side1 + side2 * side2;
  hypotenuse = sqrt(cSquared);

  printf("\n%i² + %i² = %i²\n", side1, side2, cSquared);
  printf("Hypotenuse = %i\n", hypotenuse);

  return 0;
}
