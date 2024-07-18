// Chapter 2

// Using a simple function that simply prints 2 characters.

// Install the GCC Compiler:

// Ensure you have the GCC compiler installed. You can install it using:

// sudo apt-get update
// sudo apt-get install gcc

// To run in Linux(Debian), we are going to use the gcc compiler
// gcc hello.c -o hello
// This command tells gcc to compile hello.c and output an executable named hello.

// Now, you can run your compiled program. In the terminal, type:

// ./hello

#include<stdio.h>

void printComma(){
    printf(",");
    return;
}

int main(){
    printf("Daniel-Caleb");
    printComma();
    printf("Ronoh!\n");
    return 0;
}