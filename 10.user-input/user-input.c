#include <stdio.h>

int main(int argc, char *argv[])
{
  int age; // creates empty integer for user to input age into
  char name[25]; // assigns 25 bytes to a name string

  printf("how old are you? "); // prints text prompting for the user's age
  
  // scanf function allows user to input data in the specified format, requires the address of a variable with the corresponding data type
  scanf("%d\n", &age); 

  // prints feedback utilising the new data
  printf("you are %d years old", age);

  printf("\nwhat is your name? ");
  // becuase the user may input a first and last name we must use a different function as scanf reads up until any whitespace
  // scanf("%s", &name);
  fflush(stdout);
  fgets(name, 25, stdin);
  printf("your name is %s", name);
  
  return 0;
}
