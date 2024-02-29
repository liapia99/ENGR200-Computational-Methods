// This program is designed to print the Fibonacci sequence of a given value.
// The following code is written and compiled with CLion
//
// Program: Class Exercise 2.c
// Purpose: To compute the Fibonacci sequence.
//
// Author: Julia Piascik
// Course ENGR200 Computational Method in Engineering
// Term Spring 2024
// Date: 2/29/2024


#include <stdio.h>

/* function definition */
long fibonacci(long n) {
    if (n <= 1) /* base case */
    { return n; } /* fi */
    else /* recursion step */
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    } /* esle */
}/*end of fibonacci*/

int main(void) {
    //variable definitions
    long int n, f;
    
    //input section
    printf("Please enter value n:");
    scanf("%ld", &n);
    
    //computation section
    f = fibonacci(n);
    
    //output section
    printf("The %ld-th Fibonacci is %ld.\n", n, f);
    
    //exit 
    return 0;
}
// end of main
