// Take multiple names from the user and store them in an array
#include <stdio.h>

int main() {

// This needs to be a 2d array otherwise you will get unexpected results
//          Can store 100 names
//            /
  char name[2][30];
//             /
//           Each string can be 30 characters

  int i, n;

  printf("\nEnter the amount of names you want to store: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Enter a name: ");
    scanf(" %[^\n]", name[i]);
  }

  printf("\nList of names: ");
  for (i = 0; i < n; i++) {
    printf("\n%s", name[i]);
  }

  return 0;
}
