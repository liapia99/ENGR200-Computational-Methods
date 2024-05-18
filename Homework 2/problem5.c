// This program is designed to compute the sum of two user given integers. 
// The following code is written and compiled with CLion
//
// Program: problem5.c
// Purpose: To compute the sum of two user given integers. 

// Author: Julia Piascik
// Course ENGR200 Computational Method in Engineering
// Term Spring 2024
// Date: 3/11/2024

#include <stdio.h>

int int1, int2, total;


int main() {

  printf("Input the first integer: ");
  scanf("%d", &int1);
  
  printf("Input the second integer: ");
  scanf("%d", &int2);

  total = int1 + int2; 

  printf("Sum of the above two integers =  %d", total);
  
  return 0;
}
