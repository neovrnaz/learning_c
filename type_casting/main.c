#include <stdio.h>

int main() {
  int eggs;

  printf("The number of eggs for the day: ");
  scanf("%i", &eggs);

  //              Type cast can be done by either putting it before the variable
  //              or by adding more digits to the number in question e.g. 12.00
  //                /
  double dozen = (double) eggs / 12;
  printf("There are %.2f dozens of eggs.\n", dozen);

  return 0;
}
