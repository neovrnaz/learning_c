#include <stdio.h>

int main() {

  /* Declaring vs Initializing a variable */

  int x;   // Declaring/defining x

  x = 10; // Initializing x

  int y = x / 2; // The value of y is NOT x / 2

  /* Expression - A combination of operators and operands that reduces to a single value */
  // There are 2 types of expressions
  // 1. Assigns a value
  x = 7;
  // 2. Has a value
  3 + 4;

  // Arithmetic Expressions - Consists of operands and arithmetic operators
  6*2/(2+2/3 + 6) + 8 * (8/4)
  1 + 16;
  17

  // Relational Expressions - Compares two numeric expressions
  x%2 == 0
  a! = b
  a + b == x + y
  x >= 9

  // Logical Expressions - Computes either a a zero or non zero value
  (x > 4) && (x < 6)
  (x > 10) || (x < 6)

  // Conditional Expression - Returns 1 if true otherwise returns 0
  expression1 ? expression2 : expression3

  /* Statement - Expresses some action to be carried out */

  // Selection Statements
  else {
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

/* Additional Notes */
x = 9/2 + a - b; // Is a statement NOT an expression. The portion after the equals sign is an expression