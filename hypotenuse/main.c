#include <stdio.h>
#include <math.h>

int main() {
  // TODO: Replace int with double
  int adjacentSide;
  int oppositeSide;
  int cSquared;
  int hypotenuse;

  printf("Find the hypotenuse of a triangle!\n\n");

  printf("Enter the adjacent side: ");
  scanf("%i", &adjacentSide);

  printf("Enter the opposite side: ");
  scanf("%i", &oppositeSide);

  cSquared = adjacentSide * adjacentSide + oppositeSide * oppositeSide;
  hypotenuse = sqrt(cSquared);

  printf("\n%i² + %i² = %i²\n", adjacentSide, oppositeSide, cSquared);
  printf("Hypotenuse = %i\n", hypotenuse);

  return 0;
}
