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
  int lowerNum;
  printf("Enter a lower number: ");
  scanf("%i", &lowerNum);
  return lowerNum;
}

int scanUpperNum() {
  int upperNum;
  printf("Enter an upper number: ");
  scanf("%i", &upperNum);
  return upperNum;
}

int generateRandomNumber(lower, upper) {
  int num = (rand() % (upper - lower + 1)) + lower;
  return num;
}

int collectUsersGuess() {
  int guess;
  scanf("%d", &guess);
  return guess;
}

void compareGuessToRange(lower, upper, guess) {
  do {
    if (guess < lower) {
      printf("Sorry, that number is too small. Try again.\n");
    } else if (guess > upper) {
      printf("Sorry, that number is too large. Try again.\n");
    }
  } while (guess < lower || guess > upper);
}

void compareGuessToAnswer(randNum, guess) {
  do {
    if (guess == randNum) {
      printf("You got it! The answer was %d", randNum);
    } else if (guess) {
      printf("Sorry, that wasn't the right number! Please Try again.\n");
    }
  } while (guess != randNum);
}

// How can you have low coupling & not parameters?

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

  // Get a new seed on execution
  srand(time(0));

  // Collect lower and upper numbers
  int lower = scanLowerNum();
  int upper = scanUpperNum();

  // Generate random number based on upper & lower numbers
  int randomNum = generateRandomNumber(lower, upper);
  printf("The random number %d has been generated.\n", randomNum);

  // Ask user to guess the number
  printf("Please guess a random number between %d and %d: ", lower, upper);
  int guess = collectUsersGuess();

  // Notify the user what number they guessed
  printf("You guessed %d", guess);

  // Confirm that the users guess was within the specified range
  compareGuessToRange(lower, upper, guess);

  // Compare the users guess to the random number


  printf("\nThanks for playing!\n");

>>>>>>> f3ed30e... Further seperate code into functions
  return 0;
}