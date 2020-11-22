/*
 * Takes two ints as inputs and outputs
 * the hypotenuse of a right triangle
 *
 * Date: Nov 22, 2020
 * Author: Elijah Gray
 * */

#include <stdio.h>
#include <math.h>

int main() {
  int adjacentSide;
  int oppositeSide;

  printf("This app will calculate the hypotenuse of a triangle!\n\n");

  printf("Enter the adjacent side: ");
  scanf("%i", &adjacentSide);

  printf("Enter the opposite side: ");
  scanf("%i", &oppositeSide);

  int cSquared = adjacentSide * adjacentSide + oppositeSide * oppositeSide;
  int hypotenuse = sqrt(cSquared);

  printf("\n%i² + %i² = %i²\n", adjacentSide, oppositeSide, cSquared);
  printf("Hypotenuse = %i\n", hypotenuse);

  return 0;
}
