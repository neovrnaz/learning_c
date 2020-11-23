#include <stdio.h>
#include <string.h>

int main() {
  char *stringArray[] = {"string1", "string2", "string3", "string4"};
  unsigned int numElements = sizeof(stringArray)/sizeof(stringArray[0]);
  unsigned int i;

  for (i = 0; i < numElements; i++) {
    if (strcmp(stringArray[i], "string2") == 0) {
      printf("Found at %u\n", i + 1);
      break;
    }
  }

  return 0;
}
