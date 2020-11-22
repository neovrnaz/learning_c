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

+----------------+-------------------+---------------------------------+
|   Data Type    |       Size        |              Range              |
+----------------+-------------------+---------------------------------+
| char           | at least 1 byte   | -128 to 127                     |
| unsigned char  | at least 1 byte   | 0 to 255                        |
| short          | at least 2 bytes  | -32768 to 32767                 |
| unsigned short | at least 2 bytes  | 0 to 65535                      |
| int            | at least 2 bytes  | -32768 to 32767                 |
| unsigned int   | at least 2 bytes  | 0 to 65535                      |
| long           | at least 4 bytes  | -2,147,483,648 to 2,147,483,647 |
| unsigned long  | at least 4 bytes  | 0 to 4,294,967,295              |
| float          | at least 2 bytes  | 3.4e-038 to 3.4e+038            |
| double         | at least 8 bytes  | 1.7e-308 to 1.7e+308            |
| long double    | at least 10 bytes | 1.7e-4932 to 1.7e+4932          |
+----------------+-------------------+---------------------------------+

/* Floating point numbers: */
double
float

// Integers are whole numbers
int main() {

  int x = 5;
//        \
//        An individual piece of data is called a Datum

  return 0;
}
