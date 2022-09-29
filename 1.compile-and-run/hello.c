/*
 * preprocessor command which tells the compiler to include the contents of a file,
 * in this case the file is the standard input output header file
*/
#include <stdio.h> 

int main() // anything in our main function is read procedurally from top to bottom
{
  printf("hello\n"); // prints a string to the console, note the '\n' for newline
  printf("is it me you're looking for?"); 

  return 0; // returns exit status of our program, 0 for no errors, 1 for error
}
