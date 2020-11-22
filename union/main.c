#include <stdio.h>

// Union members share the same memory location
union abc {
  int a;
  char b;
  double c;
  float d;
};

int main() {
  union abc var;
  var.a = 90;
  union abc *p = &var;

  //                Members of the union can be accessed through pointers using the arrow operator
  //                  /
  printf("var.a = %d, %c\n", p->a, p->b);
  printf("The size of union abc is: %ld bytes", sizeof(union abc));
  return 0;
}
