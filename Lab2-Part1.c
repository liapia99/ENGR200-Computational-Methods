// This program is designed to compute the binary number of any decimal from 0-32 
// The following code is written and compiled with CLion
//
// Program: Lab2-Part1.c
// Purpose: To compute the binary number of any decimal from 0-32 

// Author: Julia Piascik
// Course ENGR200 Computational Method in Engineering
// Term Spring 2024
// Date: 2/19/2024

#include <stdio.h>


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
int main(){
    printf("Solutions to Part 1 of Lab 2 are: ");
    printf("\n");
    binary();
    printf("\n");
}
