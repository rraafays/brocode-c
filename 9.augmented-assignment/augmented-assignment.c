#include <stdio.h>

int main(int argc, char *argv[])
{
  /*
    augmented assignment operators are used to replace a statement
    where an operator takes a variable as one of its arguments
    and then assigns the result back to the same variable
  */

  int x = 10;
  x += 1;
  printf("%d", x);
}
