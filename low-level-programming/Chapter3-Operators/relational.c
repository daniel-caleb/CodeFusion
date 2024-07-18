#include <stdio.h>

int main(void) {

    int a = 5;

    int b = 5;
    
    int result = (a == b);
    int notequal = (a != b);
    int greater = (a > b);
    int less = (a < b);

    printf("Result: %i\n", result); // Output: Result: 1
    printf("NotEqual: %i\n", notequal);
    printf("Greater: %i\n", greater);
    printf("Less: %i\n", less);
}