#include <stdio.h>

int main (int argc, char *argv[])
{
  // + (addition)
  // - (subtraction)
  // * (multiplication)
  // / (division)
  // % (modulus)
  // ++ (increment)
  // -- (decrement)

  int x = 12;
  int y = 5;

  float a = x / (float) y;
  printf("%f\n", a);

  int b = x % y;
  printf("%d\n", b);

  x++; y--;
  printf("%d %d", x, y);

  return 0;
}
