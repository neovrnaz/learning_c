#include <stdio.h>

int main() {
  int a[1000], i, n;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  printf("Enter %d elements in the array: \n\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d ", &a[i]);
  }

  printf("The elements in the array are: ");
  for (i = 0; i < n; i++) {
    printf("%d\n", a[i]);
  }

  return 0;
}
