// This program is designed to accept an employee's ID, total worked hours in a month and the amount they received per hour and print out the ID and salary of that employee in a given month. 
// The following code is written and compiled with CLion
//
// Program: problem8.c
// Purpose: To accept an employee's ID, total worked hours in a month and the amount they received per hour and print out the ID and salary of that employee in a given month. 

// Author: Julia Piascik
// Course ENGR200 Computational Method in Engineering
// Term Spring 2024
// Date: 3/11/2024

#include <stdio.h>

int id, hrs_worked, sal;
float total_sal;

int main() {

  printf("Input the Employee's ID: ");
  scanf("%d", &id);
  
  printf("Input the number of hours worked: ");
  scanf("%d", &hrs_worked);
  
  printf("Input the salary per hour: ");
  scanf("%d", &sal);
  
  
  total_sal = hrs_worked * sal;
  
  printf("Employee's ID =  %d \n", id);
  printf("Salary =  U$ %.2f", total_sal);
  
  return 0;
}
