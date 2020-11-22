#include <stdlib.h>
#include <stdio.h>

/*
 * Commands to test:
 * cd main_argc_argv
 * gcc main.c -o add
 * ./add 3 2 5
 */

//                        You can think of argv as an array of strings
//                         /
int main(int argc, char *argv[]) { // argc and argv are how command line arguments are passed
//            /           /
//           /          argv stands for argument values
//          /
//        argc stands for argument count

  int i, sum = 0;
  printf("argc = %d\n", argc);
  printf("See what's in argv[]\n");

  if (argc > 1) {
    for (i = 0; i < argc; i++) {
      printf("argv[%d] = %s\n", i, argv[i]);
      sum += atoi(argv[i]);
    }
    printf("Total = %d\n", sum);
  }

  return 0;
}
