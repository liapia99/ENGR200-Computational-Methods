// This program is designed to print the value of the cosine taylor series when given a value
// The following code is written and compiled with CLion
//
// Program: Lab3-Part2.c
// Purpose: To compute the cosine taylor series.
//
// Author: Julia Piascik
// Course ENGR200 Computational Method in Engineering
// Term Spring 2024
// Date: 2/22/2024


#include <stdio.h>
#include <math.h>

int x, n, i, fact;
double sum;

int main() {
    printf("Enter the value of x:");
    scanf("%d", &x);

    n = 10; fact = 1; sum = 1;

    for( i = 1; i <= n; i++){
        fact *= i;
        if(i % 2 == 0){
            if (i == 2 || i == 6 || i == 10){
                sum += -pow(x, i) / fact;
            }
            else{
                sum += pow(x, i) / fact;
            }

        }
    }
    printf("The sum is: %lf", sum);

    return 0;
}

