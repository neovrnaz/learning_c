#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PLANETS 3
#define BUFFSIZE 100
#define PLANETSTRING 8

int main() {
  char *planetsArray[8] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
  char **ptr = planetsArray;
  char correctPlanetAnswers[PLANETS][PLANETSTRING] = {};
  int answersCorrect = 0;

  char *planets[PLANETS];
  char buffer[BUFFSIZE];
  size_t i, count = 0, slen;

  for (i = 0; i < PLANETS; i++) {
    printf("Planet %lu: ", i + 1);
    if (fgets(buffer, BUFFSIZE, stdin) == NULL) {
      fprintf(stderr, "Error reading string into buffer.\n");
      exit(EXIT_FAILURE);
    }

    slen = strlen(buffer);
    if (slen > 0) {
      if (buffer[slen-1] == '\n') {
        buffer[slen-1] = '\0';
      } else {
        printf("Exceeded buffer length of %d.\n", BUFFSIZE);
        exit(EXIT_FAILURE);
      }
    }

    planets[count] = malloc(strlen(buffer) + 1);

    if (!planets[count]) {
      printf("Cannot allocate memory for string.\n");
      exit(EXIT_FAILURE);
    }

    strcpy(planets[count], buffer);

    count++;

  }

  // Keep track of correct answers
  for (i = 0; i < count; i++) {
    if (strcmp(planets[i], planetsArray[i]) == 0) {
      strcpy(correctPlanetAnswers[i], planets[i]);
      answersCorrect++;
    }
  }

  printf("\nYour Answers: \n");
  for (i = 0; i < count; i++) {
    printf("Planet %zu) %s\n", i + 1, planets[i]);
    free(planets[i]);
    planets[i] = NULL;
  }

  printf("\nYou got %i answers correct!", answersCorrect);
  printf("\nCorrect Answers List:\n\n");
  for (i = 0; i < count; i++) {
    if (strcmp(planetsArray[i], correctPlanetAnswers[i]) == 0) {
      printf("Planet %zu) %s\n", i + 1, correctPlanetAnswers[i]);
    }
  }
  return 0;
}
