#include <stdio.h>

// Calculates the area of a circle
int main() {

  int radius; // The distance from outside to the center of the circle

  printf("Please enter a radius: ");

//           Address-of operator - Returns the memory address of a variable
//             /
  scanf("%i", &radius);

  double area = 3.14159 * (radius * radius);

  printf("A circle with a radius of %i, has an area of: %f\n", radius, area);

  return 0;
}
