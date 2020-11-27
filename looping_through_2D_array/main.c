#include <stdio.h>

#define COLUMNS 3
#define ROWS 2

void loop_through_columns(int grades_arr[]) {
  // Rows
  for (int i = 0; i < COLUMNS; i++) {
    printf("%d, ", grades_arr[i]);
  }
}

int main() {

  int grades[ROWS][COLUMNS] = {
      {12, 23, 54},
      {55, 73, 23}
  };

  for (int i = 0; i < ROWS; i++) {
    loop_through_columns(grades[i]);
  }
  return 0;
}
