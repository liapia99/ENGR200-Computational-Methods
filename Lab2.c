// This program is designed to compute the binary number of any decimal from 0-32 and compute the roots of ax^2 + bx + c = 0 and print the solution with three decimal places.
// The following code is written and compiled with CLion
//
// Program: Lab2.c
// Purpose: To compute the binary number of any decimal from 0-32 and compute the roots of ax^2 + bx + c = 0 and print the solution with three decimals places.
//
// Author: Julia Piascik
// Course ENGR200 Computational Method in Engineering
// Term Spring 2024
// Date: 2/19/2024

#include <stdio.h>
#include <complex.h>
#include <math.h>

void binary(){
    int n, x0, x1, x2, x3, x4, r0, r1, r2, r3, r4;
    printf("Input a number in the range 0-32:");
    scanf("%d", &n);

    if (n >= 0 && n <= 32){
        x0 = n / 2; r0 = n % 2;
        x1 = x0 / 2; r1 = x0 % 2;
        x2 = x1 / 2; r2 = x1 % 2;
        x3 = x2 / 2; r3 = x2 % 2;
        x4 = x3 / 2; r4 = x3 % 2;

        printf("Binary equivalent of decimal number %d is %d%d%d%d%d", n, r4,r3,r2,r1,r0);
    }
    else{
        printf("Entered number is out of range.");
    }

}

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

int main(){
    printf("Solutions to Part 1 of Lab 2 are: ");
    printf("\n");
    binary();
    printf("\n");
    printf("\n");
    printf("Solutions to Part 2 of Lab 2 are: ");
    printf("\n");
    quadratic();
}


