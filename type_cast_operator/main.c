#include <stdio.h>

int main() {
  int slices = 17;
  int people = 2;

  //                               Explicit type casting
  //                                 /
  double halfThePizza = slices / (double) people;

  printf("%f\n", halfThePizza);

  double c = 25 / 2 * 2;

  //                  Just because one of the operands is a double, doesn't mean you get the expected results
  //                    /
  double d = 25 / 2 * 2.0;

  printf("c: %f\n", c); // 24.000000
  printf("d: %f\n", d); // 24.000000

  return 0;
}
