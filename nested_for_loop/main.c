#include <stdio.h>

int main() {
  int max;
  int numbers = 0;
  printf("Enter a number: ");
  scanf("%d", &max);
  int i;
  int k;
  for (i = 0; i < max; i++) {

    // A nested for loop's variable is usually called k
    // We're making k = i because we want to change k
    for (k = i; k >= 0 ; k--) {
      printf("%d ", k);
    }
    printf("\n");
  }
  printf("You printed up to %d numbers!", i);

  return 0;
}
