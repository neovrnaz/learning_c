/**
 * A simple guessing app that asks a for a user to guess a number
 * between 1 - 5. The user is notified if the guess was correct.
 * */
#include <stdio.h>
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
  srand(time(0)); // Get a new seed on execution
  int rand_num = (rand() % (upper - lower + 1)) + lower;
  return rand_num;
}

int getUsersGuess() {
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

  printf("--------------------------------\n");
  printf("Welcome to the Guessing Game!\n");
  printf("--------------------------------\n");

  // Collect lower and upper numbers
  printf("\nPlease enter a low number: ");
  int lower = scanLowerNum();
  printf("Please enter a high number: ");
  int upper = scanUpperNum();

  sleepAndPrintDots();

  // Generate a random number within specified range
  int random_number = generateRandomNumber(lower, upper);

  printf("A random number has been generated within that range!");

  do {
    printf("\nPlease enter a number between %d and %d: ", lower, upper);
    guess = getUsersGuess();
    compareGuessToRange(lower, upper, guess);
    compareGuessToAnswer(random_number, guess);
  } while (guess != random_number);

  printf("\nThanks for playing!\n");

  return 0;
}