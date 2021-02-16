/**
 * Write a program using File-Handling to countt the number of character in a given .dat file.
 */

#include <stdio.h>
#define FILENAME_LENGTH 100

int main() {
  FILE *file;
  char filename[FILENAME_LENGTH];
  char c;
  int count = 0;

  printf("Enter the filename (not longer than %d characters): ", FILENAME_LENGTH - 1);
  scanf(" %s", filename);
  file = fopen(filename, "r");
  if (file == NULL) {
    printf("ERROR: Could not open file");
    return -1;
  }

  while (1) {
    c = getc(file);
    if (c != EOF) {
      ++count;
    } else {
      break;
    }
  };

  printf("The number of character in the given file is %d\n", count);
  return 0;
}