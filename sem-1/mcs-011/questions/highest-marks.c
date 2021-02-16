/**
 * Write a program to find the highest marks obtained by students in "c programming" in a batch of 10 students 
*/

#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 10

struct Student {
 char name[33];
 double c_marks;
};

int main() {
  struct Student stu_arr[STUDENTS];
  double highest = 0;
  char *highest_stu_name;
  char temp;

  for (int i = 0; i < STUDENTS; ++i) {
    struct Student *stu = &stu_arr[i];
    printf("Enter the name of student %d: ", i+1);
    fgets(stu->name, 32, stdin);

    printf("Enter the marks of student %d: ", i + 1);
    scanf(" %lf", &stu->c_marks);

    // clear the buffer
    do {
      temp = getchar();
    } while (temp != '\n');
  }

  for (int i = 0; i < STUDENTS; ++i) {
    struct Student *stu = &stu_arr[i];

    if (highest < stu->c_marks) {
      highest = stu->c_marks;
      highest_stu_name = stu->name; 
    }
  }

  printf("The highest obtained in C Programming is %.2lf by %s", highest, highest_stu_name);
  return 0;
}