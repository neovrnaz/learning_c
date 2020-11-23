#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PLANETS 3
#define BUFFSIZE 100
#define PLANETSSTRING 7

int main(void) {

  char *correctPlanets[8] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
  char *correctPlanetAnswers[8][30] = {};
  char **ptr = correctPlanetAnswers;
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
    if (strcmp(planets[i], correctPlanets[i]) == 0) {

      answersCorrect++;
    }
  }

  printf("\nYour Answers: \n");
  for (i = 0; i < count; i++) {
    printf("Planet %zu) %s\n", i + 1, planets[i]);
    free(planets[i]);
    planets[i] = NULL;
  }

  printf("\nYou got %i answers correct!\n", answersCorrect);

  return 0;
}