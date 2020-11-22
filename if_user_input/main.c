#include <stdio.h>

int main() {
  char userInput[1];
  printf("In your opinion, is pizza healthy? (y/n): ");
  scanf("%s", userInput);

  if (*userInput == 'y') {
    printf("I'm sorry, but pizza is actually not healthy.");
  } else if (*userInput == 'n'){
    printf("That's correct! Pizza contains a lot of sodium");
  } else {
    printf("Sorry, I didn't get a 'y' or 'n' answer.");
  }
  return 0;
}
