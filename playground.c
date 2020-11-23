#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PLANETS 3
#define BUFFSIZE 100

int main(void) {

  char *correctPlanets[8] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
  char **ptr = correctPlanets;

  char *planets[PLANETS];
  char buffer[BUFFSIZE];
  size_t i, count = 0, slen;

  for (i = 0; i < PLANETS; i++) {
    printf("Enter a word: ");
    if (fgets(buffer, BUFFSIZE, stdin) == NULL) {
      fprintf(stderr, "Error reading string into buffer.\n");
      exit(EXIT_FAILURE);
    }
    printf("buffer: %s", buffer);
    printf("PLANETS: %c", PLANETS);

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
  printf("\nYour Answers: \n");
  for (i = 0; i < count; i++) {
    printf("Planet %zu) %s\n", i, planets[i]);
    printf("Correct Planet %zu) %s\n", i, correctPlanets[i]);
    if (planets[i] == correctPlanets[i]) {
      printf("It works!");
    }
//    printf("Planet %zu) %s\n", i, planets[i]);
    free(planets[i]);
    planets[i] = NULL;
  }

  printf("\nThe correct answers:\n");
  for (i = 0; i < 8; i++)
    printf("Planet %zu) %s\n", i + 1, correctPlanets[i]);


  return 0;
}