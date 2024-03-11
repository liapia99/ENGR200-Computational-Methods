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
    printf("Area of the rectangle = %d inches", a);

    return 0;
}
