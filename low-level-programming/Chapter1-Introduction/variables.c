#include <stdio.h>

int main(){
    printf("Hi there! you are going to learn about variables");
    int age; // initialization
    // the variable age with its original value
    age = 254; // declaration
    // changing the value of age
    // the new value will be 30
    age = 30;
    /*
    trying to assign a floating-point value
    to a variable with type int
    will cause an error in your program
    */
    //      age = 29.5;
    printf(age);
    return 0;
}