#include <stdio.h>

int askHowManySlices() {
  int slices = 3;
  printf("How many slices of pizza have you eaten?: ");
  scanf("%d", &slices);
  return slices;
}

int pizzaAmountChecker() {
  int slices = askHowManySlices();
  switch (slices) {
    case 0:printf("But you said you did!");
      break;
    case 1:printf("You did a great job!");
      break;
    case 2:printf("You did a ok job!");
      break;
    case 3:printf("You should share next time!");
      break;
    case 4:printf("You ate half the pizza :(");
      break;
    default:printf("That's not healthy :/");
  }
}

char askIfUserAte() {
  char hasEaten;
  printf("Have you eaten any pizza? (y/n): ");
  scanf("%c", &hasEaten);
  return hasEaten;
}

void hasUserAte() {
  char hasEaten = askIfUserAte();
  switch (hasEaten) {
    case 121:pizzaAmountChecker();
      break;
    case 110:printf("That's good! Pizza has a lot of sodium!");
      break;
  }
}

int main() {
  hasUserAte();
  return 0;
}
