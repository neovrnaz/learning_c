#include <stdio.h>

// A pointer is a type of data that stores the memory address

int main() {

  // Inside of memory, there is spot holding the value of slices and a pointer points to that spot
  int slices = 20;

  //  This is a pointer to slices
  //   /
  int *p = &slices;

  printf("%d slices\n", slices);

  //                                       This is called "dereferencing a pointer"
  //                                        /
  printf("%d slices (using a pointer)\n\n", *p);


  // Redefining a pointer is similar to redefining a variable
  *p = 21;
  printf("%d slices (using a pointer)\n", *p);
  printf("%d slices\n", slices);


  // This is how you increment a pointer
  (*p)++;

  return 0;
}
