#include <stdio.h>

/*
 * Token - A single element in a programming language like a keyword, operator or punctuation mark
 * e.g. printf, (, ", ;, etc.
 *
 * There are 6 types of tokens in C:
 * 1. Keywords
 * 2. Identifiers
 * 3. Constants
 * 4. String
 * 5. Special Symbols
 * 6. Operators
 *
 *
 * Special Characters
 * +---+---+---+---+---+
 * | , | < | > | . | _ |
 * +---+---+---+---+---+
 * | ( | ) | ; | $ | : |
 * +---+---+---+---+---+
 * | % | [ | ] | # | ? |
 * +---+---+---+---+---+
 * | ' | & | { | } | " |
 * +---+---+---+---+---+
 * | ^ | ! | * | / | | |
 * +---+---+---+---+---+
 * | - | \ | ~ | + |   |
 * +---+---+---+---+---+
 *
 * Special Characters CANNOT be used as an identifier
 *
 */

/*
 * Keywords - Reserved keywords for the compiler
 *
 * +----------+--------+----------+----------+
 * | auto     | double | int      | struct   |
 * +----------+--------+----------+----------+
 * | break    | else   | long     | switch   |
 * +----------+--------+----------+----------+
 * | case     | enum   | register | typedef  |
 * +----------+--------+----------+----------+
 * | char     | extern | return   | union    |
 * +----------+--------+----------+----------+
 * | continue | for    | signed   | void     |
 * +----------+--------+----------+----------+
 * | do       | if     | static   | while    |
 * +----------+--------+----------+----------+
 * | default  | goto   | sizeof   | volatile |
 * +----------+--------+----------+----------+
 * | const    | float  | short    | unsigned |
 * +----------+--------+----------+----------+
 *
 * */

/*
 * Identifiers - Refers to the name given to entities such as variables, functions, structures, etc.
 *
 * int money
 * double accountBalance
 *
 * Here, money and accountBalance are identifiers.
 *
 * */


int main() {

// Keyword
// /
  int money;
//      |
//  Identifier

  printf("Hello, World!\n");
  return 0;
}
