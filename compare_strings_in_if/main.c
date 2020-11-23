#include <stdio.h>
#include <string.h>

int main() {

  char favoriteDairyProduct[30];

  printf("Do you like cheese?: ");
  scanf("%s", favoriteDairyProduct);

  if (strcmp(favoriteDairyProduct, "Yes") == 0) {
    printf("I like cheese too!");
  } else {
    printf("Aww how come you don't like cheese?.");
  }

  return 0;
}
