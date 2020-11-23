#include <stdio.h>
#include <string.h>

int main() {
  int i;
  int planetCounter = 1;
  char usersAnswer[8];

  printf("--------------------------------\n");
  printf("Welcome to the Solar System Quiz!\n");
  printf("--------------------------------\n");

  char *arr[8] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
  char **ptr = arr;

  // Show the players answers with an X next to the ones they got wrong



  for (i = 0; i < 8; i++) {
    printf("Please enter the name of planet %i: ", planetCounter++);
    scanf("%c", &usersAnswer[i]);
  }

  printf("The correct answers:\n");
  for (i = 0; i < 8; i++)
    printf("Planet %d) %s\n", i+1, ptr[i]);


  return 0;
}
