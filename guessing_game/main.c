#include <stdio.h>
<<<<<<< HEAD
// User has to guess a number between 1 - 5
// Output whether the user got it wrong or right

int main() {
  printf("Hello, World!\n");
=======
#include <stdlib.h>
#include <time.h>

int scanLowerNum() {
  int lower_num;
  scanf("%i", &lower_num);
  return lower_num;
}

int scanUpperNum() {
  int upper_num;
  scanf("%i", &upper_num);
  return upper_num;
}

int generateRandomNumber(lower, upper) {
  // Get a new seed on execution
  srand(time(0));

  int rand_num = (rand() % (upper - lower + 1)) + lower;
  return rand_num;
}

int askForUsersGuess() {
  int guess;
  scanf("%d", &guess);
  return guess;
}

void compareGuessToRange(lower, upper, guess) {
  if (guess < lower) {
    printf("Sorry, that number is too small. Try again.\n");
  } else if (guess > upper) {
    printf("Sorry, that number is too large. Try again.\n");
  }
}

void compareGuessToAnswer(randNum, guess) {
  if (guess == randNum) {
    printf("You got it right! The answer was %d", randNum);
  } else if (guess != randNum) {
    printf("Sorry, that wasn't the right number! Please Try again.\n");
  }
}

void sleepcp() {
  int milliseconds = 600;
  clock_t time_end;
  time_end = clock() + milliseconds * CLOCKS_PER_SEC / 1000;
  while (clock() < time_end) {
  }
}

void sleepAndPrintDots() {
  sleepcp();
  printf(".\n");
  sleepcp();
  printf(".\n");
  sleepcp();
  printf(".\n");
  sleepcp();
}

int main() {
  int guess;

  // Collect lower and upper numbers
  printf("\nPlease enter a number: ");
  int lower = scanLowerNum();
  printf("Please enter a number greater than %d: ", lower);
  int upper = scanUpperNum();

  // Generate a random number within specified range
  printf("\n\nGenerating a random number...");
  int random_number = generateRandomNumber(lower, upper);

  do {
    printf("\n\nPlease enter a number between %d and %d: ", lower, upper);
    guess = askForUsersGuess();
    compareGuessToRange(lower, upper, guess);
    compareGuessToAnswer(random_number, guess);
  } while (guess != random_number);

  printf("\nThanks for playing!\n");

>>>>>>> f3ed30e... Further seperate code into functions
  return 0;
}