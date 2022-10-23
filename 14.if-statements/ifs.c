#include <stdio.h>

int main(int argc, char *argv[])
{
  int age; // empty integer variable

  printf("enter age: "); // prompts user for an age
  scanf("%d", &age); // reads the next input and sets the value of age to the input

  if (age >= 17) { printf("you are elligble to drive"); } // if the user enters an age greater than or equal to 17, tells them they are elligble to drive
  else { printf("you are too young to drive"); } // if the user does not meet the conditions of the previous condition, defaults to telling them they are too young

  return 0;
}
