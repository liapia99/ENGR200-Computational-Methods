// The following program will perform addition (2 and 6), subtraction (7 and 3), division (15 by 10 ) and multiplication (2.5 and 3.6)
// The following program will perform the area and circumference of a circle with a radius 1.35 meters.
// The following code is written and compiled with CLion
//
// Program: Lab1 - Basic C Programs.c
// Purpose: To compute the calculations of addition, subtraction, division and multiplication (for 5a).
// Purpose: To compute the area and circumference of a circle (for 5b).
//
// Author: Julia Piascik
// Course ENGR200 Computational Method in Engineering
// Term Spring 2024
// Date: 2/7/2024

#include <stdio.h>

#define PI 3.1415926 // defining pi to use for function circle_math()


// creating a function for part 5a of Lab 1
void pemdas(){
    int add1, add2, sub1, sub2, add, sub, mul; // variable declaration for given integer values for pemdas()
    float mul1, mul2, divi, div1, div2; // variable declaration for given float values for pemdas()

    // assigning values to variables
    add1 = 2; add2 = 6;
    sub1 = 7; sub2 = 3;
    div1 = 15.0; div2 = 10.0;
    mul1 = 2.50; mul2 = 3.60;

    // calculating the four different formulas
    add = add1 + add2; // addition
    sub = sub1 - sub2; // subtraction
    divi = div1 / div2; // division
    mul = mul1 * mul2; // multiplication

    // printing out the output values
    printf("These are solutions for part 5a of Lab 1:\n");
    printf("The sum of 2 and 6 is: %d.\n", add);
    printf("The difference of 7 and 3 is: %d.\n", sub);
    printf("The quotient of 15 and 10 is: %.2f.\n", divi);
    printf("The product of 2.5 and 3.6 is: %d.\n", mul);
    printf("\n");
}
// creating a function for part 5b of Lab 1
void circle_math(){

    float c, a, r; // variable declaration for given float values for circle()

    r = 1.35;

    c = 2 * PI * r;

    a = PI * (r * r);

    printf("These are solutions for part 5b of Lab 1:\n");
    printf("The circumference of a circle with a radius of 1.35 is: %f meters.\n", c);
    printf("The area of a circle with a radius of 1.35 is: %f meters squared.\n", a);
}

int main() {
    // start of the program
    pemdas(); // calling the function pemdas which is part 5a
    circle_math(); // calling the function circle_math which is part 5b
    return 0;
}
