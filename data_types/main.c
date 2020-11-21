#include <stdio.h>

/* Data Types can be classified into 3 different categories */

/* Primitive Data Types - Smallest data type (Can't be broken up into pieces) */
char
int
float
double
void

/* Derived Data Types */
Array
Pointer
Function

/* User Defined Data Types*/
enum
Structure
Union

/*
 * +----------------+-------------------+---------------------------------+
 * |   Data Type    |       Size        |              Range              |
 * +----------------+-------------------+---------------------------------+
 * | char           | at least 1 byte   | -128 to 127                     |
 * | unsigned char  | at least 1 byte   | 0 to 255                        |
 * | short          | at least 2 bytes  | -32768 to 32767                 |
 * | unsigned short | at least 2 bytes  | 0 to 65535                      |
 * | int            | at least 2 bytes  | -32768 to 32767                 |
 * | unsigned int   | at least 2 bytes  | 0 to 65535                      |
 * | long           | at least 4 bytes  | -2,147,483,648 to 2,147,483,647 |
 * | unsigned long  | at least 4 bytes  | 0 to 4,294,967,295              |
 * | float          | at least 2 bytes  | 3.4e-038 to 3.4e+038            |
 * | double         | at least 8 bytes  | 1.7e-308 to 1.7e+308            |
 * | long double    | at least 10 bytes | 1.7e-4932 to 1.7e+4932          |
 * +----------------+-------------------+---------------------------------+
 */


/* Complex Data Types */


// Integers are whole numbers
int main() {
  unsigned int a = 23;
  double d = 12345.6;
  float thisFloat = (float) d;
  printf("data types!\n");
  return 0;
}
