#include <stdio.h>
#include <math.h>

int main(void) {
  int low_num;
  int high_num;

  int new_low_num;

  printf("Enter a low number: ");
  scanf("%d", &low_num);

  printf("Enter a high number: ");
  scanf("%d", &high_num);


  while (low_num < high_num) {

    printf("%d ", low_num);

    new_low_num = low_num;
    new_low_num--;
    while (new_low_num >= 0) {
      printf("%d ", new_low_num);
      new_low_num--;
    }

    low_num++;

    printf("\n");
  }

  return 0;
}