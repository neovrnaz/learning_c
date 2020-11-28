#include <stdio.h>
#define SIZE 3

//struct rectangle {
//  int length;
//  int width;
//};

typedef struct {
  int length;
  int width;
} rectangle;

typedef struct {
  int x;
  int y;
} position;

typedef struct {
  char owner[30];
  rectangle rectangle;
  position position;
} building_plan;

int main() {
/*
 * Structs allow you to encapsulate numerous pieces of data
 *
 * A way you might use a struct is if you had variables for a rectangle...
 * int length;
 * int width;
 * ...then you might want a way to have two variables for multiple rectangle
 */

//  struct rectangle my_rectangle = {5, 10};
  rectangle my_rectangle = {5, 10}; // Instead of saying struct, like above, you can use typedef
  printf("Length: %d. Width: %d\n", my_rectangle.length, my_rectangle.width);

  building_plan my_house = {"Richard Tea", {5, 10}, {32, 48}};

  printf("The house at %d %d (side %d %d) is owned by %s\n",
         my_house.position.x,
         my_house.position.y,
         my_house.rectangle.length,
         my_house.rectangle.width,
         my_house.owner
  );

  position path[] = {{0, 1}, {1, 2}, {2, 3}};

  for (int i = 0; i < SIZE; i++) {
    printf("%d %d\n", path[i].x, path[i].y);
  }

  building_plan *struct_pointer = &my_house;
  printf("position x: %d\n", struct_pointer->position.x);

  return 0;
}
