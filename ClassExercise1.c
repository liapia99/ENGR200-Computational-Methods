// This program is designed to compute the factorial of 7.
// The following code is written and compiled with CLion
//
// Program: ClassExercise1.c
// Purpose: To compute the factorial of 7.
//
// Author: Julia Piascik
// Course ENGR200 Computational Method in Engineering
// Term Spring 2024
// Date: 2/8/2024

#include <stdio.h>

int main(){

    int i, f, n;
    f = 1;

    printf("Input a number for n factorial:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        f = f * i;
    }

    printf("Factorial of %d is %d", n, f);
}


