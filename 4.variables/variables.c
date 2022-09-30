#include <stdio.h>

int main(int argc, char *argv[])
{
  /*
    variables are allocated spaces in memory which are used to store a value
    we refer to a variable's name to access the stored value,
    that variable now behaves as if it was the value it contains
    but we need to declare what type of data we are storing
  */

  int x; // declaration
  x = 1; // initialisation
  int y = 2; // declaration + initialisation
  
  int age = 20; // integer
  float gpa = 2.05; // floating point number
  char grade = 'C'; // single character
  char name[] = "raf"; // array of characters

  /*
    to place a value in a string we need to use a format specifier '%'
    in the first case we use a '%d' which specifies a digit such as our integer age
    in the second case we use a '%s' which specifies a string such as our name string
    in the third case we use a '%c' which specifies a char such as our grade char
    in the fourth case we use a '%f' which specifies a float such as our gpa float
    we can do '%.2f' to specify that we only want to show our float to 2 decimal spaces
  */
  printf("you are %d years old\n", age); 
  printf("your name is %s\n", name);
  printf("your average grade is %c\n", grade);
  printf("your gpa is %.2f", gpa);

  return 0;
}
