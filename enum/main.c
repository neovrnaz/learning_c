#include <stdio.h>

#import <stdio.h>

typedef enum {
  // These seasons are called enumerates
//  0       1      2       3      etc.
  summer, fall, winter, spring
} season;

void printPhrase(season s);

void printPhrase(season s) {
  if (s == summer) {
    printf("It's hot out\n");
  } else if (s == fall) {
    printf("It's getting cooler\n");
  } else if (s == winter) {
    printf("It's cold\n");
  } else if (s == spring) {
    printf("It's getting warmer\n");
  }
}

int main() {
  printPhrase(1);
  return 0;
}
