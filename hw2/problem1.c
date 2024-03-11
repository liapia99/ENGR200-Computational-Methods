// This program is designed to compute the area and perimeter of a rectangle with a height 7 and a width of 5 inches
// The following code is written and compiled with CLion
//
// Program: problem1.c
// Purpose: To compute the area and perimeter of a rectangle with a height 7 and a width of 5 inches

// Author: Julia Piascik
// Course ENGR200 Computational Method in Engineering
// Term Spring 2024
// Date: 3/11/2024

#include <stdio.h>
int x = 7;
int y = 5;
int a;
int p; 

int main() {
    a = x * y; 
    p = 2 * x + 2 * y; 
    printf("Perimeter of the rectangle = %d inches", p);
    printf("\n");
    printf("Area of the rectangle = %d square inches", a);

    return 0;
}
