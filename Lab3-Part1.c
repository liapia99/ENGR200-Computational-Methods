// This program is designed to print the prime numbers of a user given value.
// The following code is written and compiled with CLion
//
// Program: Lab3-Part1.c
// Purpose: To compute the all the prime numbers of a value.
//
// Author: Julia Piascik
// Course ENGR200 Computational Method in Engineering
// Term Spring 2024
// Date: 2/22/2024


#include <stdio.h>


#include <stdio.h>
int prime(int num){
    if( num <= 1){
        return 0;
    }
    for (int i = 2; i*i <= num; i++){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}
void printPrime(int l){
    printf("Prime numbers of %d are: \n", l);
    for (int i = 2; i <= l; ++i){
        if (prime(i)){
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter in a number to get its prime number:");
    scanf("%d", &n);
    printPrime(n);
    return 0;
    
}

