/**
* Using array of pointer to strings to read names of 5 friends and print them
*/
#include <stdio.h>
#include <stdlib.h>

#define COUNT 5

int main() {
  char *names[COUNT]; // array of string pointers
  char *one_name; // one string pointer for storing each friend name

  for (int i = 0; i < COUNT; ++i) {
    // read one friend name at a time

    // allocate space for storing the name, assigning 17 character's space, so 16 characters long names can be stored and one null
    one_name = malloc(17 * sizeof(char));
    printf("Enter a friend name: ");
    scanf("%s", one_name); // in every iteration store the entered name

    // store the pointer in the pointer array
    names[i] = one_name; 
  }

  printf("There are your friends:\n");
  for (int i = 0; i < COUNT; ++i) {
    printf("%s\n", names[i]);
  }

  return 0;
}