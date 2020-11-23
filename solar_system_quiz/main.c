#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PLANETS 8
#define BUFFSIZE 100
#define PLANETSTRING 8

int main() {
  char *planetsArray[8] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
  char correctPlanetAnswers[PLANETS][PLANETSTRING] = {};
  int answersCorrect = 0;
  char trophy[30];
  char *planets[PLANETS];
  char buffer[BUFFSIZE];
  size_t i, count = 0, slen;

  printf("\n---------------------------------\n");
  printf("Welcome to the Solar System Quiz!\n");
  printf("---------------------------------\n");

  // Loop through the planets
  for (i = 0; i < PLANETS; i++) {
    // Read input of one string, with error checking
    printf("Planet %lu: ", i + 1);
    if (fgets(buffer, BUFFSIZE, stdin) == NULL) {
      fprintf(stderr, "Error reading string into buffer.\n");
      exit(EXIT_FAILURE);
    }

    // Remove newline from buffer, along with checking for overflow from buffer
    slen = strlen(buffer);
    if (slen > 0) {
      if (buffer[slen - 1] == '\n') {
        buffer[slen - 1] = '\0';
      } else {
        printf("Exceeded buffer length of %d.\n", BUFFSIZE);
        exit(EXIT_FAILURE);
      }
    }

    // Allocate space for `planets[i]` and null terminator
    planets[count] = malloc(strlen(buffer) + 1);

    // Check return of malloc
    if (!planets[count]) {
      printf("Cannot allocate memory for string.\n");
      exit(EXIT_FAILURE);
    }

    // Copy over into your array of pointers
    strcpy(planets[count], buffer);

    // Increment count, ready for next space in array
    count++;

  }

  // Keep track of correct answers
  for (i = 0; i < count; i++) {
    if (strcmp(planets[i], planetsArray[i]) == 0) {
      strcpy(correctPlanetAnswers[i], planets[i]);
      answersCorrect++;
    }
  }

  // Assign a `trophy` based on the answers correct
  for (i = 0; i < count; i++) {
    if (strcmp(planetsArray[i], correctPlanetAnswers[i]) == 0) {
      printf("Planet %zu) %s\n", i + 1, correctPlanetAnswers[i]);
      // Give trophy based on amount of answers correct
      if (answersCorrect == 8) {
        strcpy(trophy, "* Platinum *");
      } else if (answersCorrect == 7) {
        strcpy(trophy, "** Gold **");
      } else if (answersCorrect == 6) {
        strcpy(trophy, "*** Silver ***");
      } else if (answersCorrect == 5) {
        strcpy(trophy, "Bronze");
      } else {
        strcpy(trophy, "Try again for a better score!");
      }
    }
    // Free strings
    free(planets[i]);
    planets[i] = NULL;
  }
  printf("\nResults:\n");
  printf("---------------------------------\n");
  printf("You got %i answers correct!", answersCorrect);
  printf("\nTrophy Earned: %s\n", trophy);
  return 0;
}
