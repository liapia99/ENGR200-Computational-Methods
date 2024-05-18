// This program is designed to convert days into years, weeks, and days. 
// The following code is written and compiled with CLion
//
// Program: problem4.c
// Purpose: To convert days into years, weeks, and days. 

// Author: Julia Piascik
// Course ENGR200 Computational Method in Engineering
// Term Spring 2024
// Date: 3/11/2024

#include <stdio.h>

int days, years, weeks;

int main() {

  printf("Enter the number of days: ");
  scanf("%d", &days);

  years = days / 365; 
  weeks = (days % 365) / 7; 
  days = days - ((years * 365) + ( weeks * 7));

  printf("Years: %d", years);
  printf("\n");
  printf("Weeks: %d", weeks);
  printf("\n");
  printf("Days: %d", days);

  return 0;
}
