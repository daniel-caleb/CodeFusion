#include <stdio.h>

int main(void) {
  
  int number;

  printf("Please enter your age: ");
  
  // The scanf() function reads user input, which is typically entered via a keyboard.
  scanf("%i", &number);

  printf("Your age is %i\n", number);
}

// scanf("format_string", &variable);
// format_string is the string that lets the computer know what to expect. It specifies the expected format of the input. For example, is it a word, a number, or something else?
// &variable is the pointer to the variable where you want to store the value gathered from the user input.