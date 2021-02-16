/**
 * Write a program using structures to find the gross salary and net salary for 5 employees of a small retail outlet if BASIC,
 * TA, DA, HRA, Other Allowances and Deductions are given as input.
 * Where gross salary = basic + ta + da + hra + other allowances and net salary = gross salary - deductions.
*/

#include <stdio.h>
#define EMP_COUNT 5

struct Employee {
  char name[65];
  double basic;
  double ta;
  double da;
  double hra;
  double other_allowances;
  double deductions;
};

double calc_gross_salary(struct Employee *emp) {
  return emp->basic + emp->ta + emp->da + emp->hra + emp->other_allowances;
}

double calc_net_salary(double gross_salary, double deductions) {
  return gross_salary - deductions;
}

int main() {
  struct Employee employees[EMP_COUNT];

  printf("Enter the details of 5 employees\n");
  for (int i = 0; i < EMP_COUNT; ++i) {
    struct Employee *emp = &employees[i];
    printf("Enter the details of %d employee: \n", i+1);
    printf("Name (not more than 64 characters long): ");
    scanf(" %s", emp->name);

    printf("TA: ");
    scanf(" %lf", &emp->ta);

    printf("DA: ");
    scanf(" %lf", &emp->da);

    printf("HRA: ");
    scanf(" %lf", &emp->hra);

    printf("Other Allowances: ");
    scanf(" %lf", &emp->other_allowances);

    printf("Deductions: ");
    scanf(" %lf", &emp->deductions);
  }

  for (int i = 0; i < EMP_COUNT; ++i) {
    struct Employee *emp = &employees[i];
    double gross_salary = calc_gross_salary(emp);
    printf("Gross salary of %s is %lf and Net salary is %lf\n", emp->name, gross_salary, calc_net_salary(gross_salary, emp->deductions));
  }

  return 0;
}
