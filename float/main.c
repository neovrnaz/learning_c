#include <stdio.h>

// Floating point - Scientific notation in Base 2

// Computers say "We've got this long binary number... 2... to the something..."
// That's a problem because it looses precision. Computers don't understand recursion. For Instance:
// Humans write 1/3 as 3.33333... (It's recurring)
// Computers

// The two main advantages to floating point numbers are speed and efficiency

// Most decimals have infinite representation in binary!

//  Humans use base 10:
// 100 10 1 1/10 1/100 1/1000
//  Computers use base 2:
// 4 2 1 1/2 1/4 1/8 1/16 (There's no 0.1)

// It's halves quarters and eights

// It's storing a set length of a number, and figuring out where the
// decimal point should be

// 0.1 in binary: 0.00011001100110011001100.. (to infinity)

int main() {


  double value = 0.10 + 0.20;
  printf("%lf", value);
  return 0;
}
