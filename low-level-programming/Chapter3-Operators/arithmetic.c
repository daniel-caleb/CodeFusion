#include <stdio.h>

int main(void) {

    int a = 5;

    int b = 3;

    int sum = a + b;
    int sub = a - b;
    int div = a / b;
    int mod = a % b;

    printf("Sum: %i\n", sum); // Output: Sum: 8
    printf("Subtraction: %i\n", sub);
    printf("Division: %i\n", div);
    printf("Modulus: %i\n", mod);
}