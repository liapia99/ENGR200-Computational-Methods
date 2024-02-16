// This program is designed to compute the binary number of any decimal from 0-32 
// The following code is written and compiled with CLion
//
// Program: Lab2-Part2.c
// Purpose: To compute the binary number of any decimal from 0-32 

// Author: Julia Piascik
// Course ENGR200 Computational Method in Engineering
// Term Spring 2024
// Date: 2/19/2024

#include <stdio.h>
#include <complex.h>
#include <math.h>

void quadratic(){

    float rr, rr2, sq, lin, a, b, c;

    printf("Input a number for a:");
    scanf("%f", &a);
    printf("Input a number for b:");
    scanf("%f", &b);
    printf("Input a number for c:");
    scanf("%f", &c);

    if (a == 0 && b==0){
        printf("No solution as a and b are both equal to 0.");
    }else{
        if ( a == 0 && b != 0){
            lin = -c / b;
            printf("Linear Equation: root = %.3f", lin);
        }
        else{
            double d = ( (b * b) - (4 * a * c) );
            if (d >= 0){
                sq = sqrt(d);
                rr = (-b + sq) / (2 * a);
                rr2 = (-b - sq) / (2 * a);
                printf("The roots are real: %.3f and %.3f", rr, rr2);
            } else {
                d = -1 * d;
                float complex sqq = csqrt(d);
                float complex rcom = -b / (2 * a) + sqq / (2 * a) * I;
                float complex rcom2 = -b / (2 * a) + (sqq / (2 * a) * I);
                printf("The roots are complex: %.3f + %.3fj and %.3f - %.3fj", creal(rcom), cimag(rcom), creal(rcom2), cimag(rcom2));
                }


            }

        }
    };
