#include <stdio.h>

int main() {

  /* Declaring vs Initializing a variable */

  int x;   // Declaring/defining x

  x = 10; // Initializing x

  int y = x / 2; // The value of y is NOT x / 2

  /* Expression - A combination of operators and operands that reduces to a single value */
  y; // (x / 2) Evaluates to 1 value

  /* Statement - Expresses some action to be carried out */

  // Selection Statements
  if (expression) {
    statement1;
  } else {
    statement2;
  }

  // Iteration Statements
  while (expression) {
    statement1;
  }

  do {
    statement
  } while (expression/condition);

  for (expression1(opt); expression2(opt); expression3(opt);) {
    statement
  }

  // Labeled Statements - A keyword followed by a colon is a label
  // default: STATEMENT

  // Expression Statements - Statements such as printf are expression statements
  printf("Hello, World!\n");

  // Jump Statements - goto; break; continue; return;
  return 0;

  // Selection Statements
}
