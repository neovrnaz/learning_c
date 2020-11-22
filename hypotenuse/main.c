#include <stdio.h>
#include <math.h>

int main() {
  // TODO: Replace int with double
  double adjacentSide;
  double oppositeSide;

  printf("This app will calculate the hypotenuse of a triangle!\n\n");

  printf("Enter the adjacent side: ");
  scanf("%lf", &adjacentSide);

  printf("Enter the opposite side: ");
  scanf("%lf", &oppositeSide);

  double cSquared = adjacentSide * adjacentSide + oppositeSide * oppositeSide;
  double hypotenuse = sqrt(cSquared);

  printf("\n%lf² + %lf² = %lf²\n", adjacentSide, oppositeSide, cSquared);
  printf("Hypotenuse = %lf\n", hypotenuse);

  return 0;
}
