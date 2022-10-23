#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
  /*
        |\
        | \
        |  \
    A   |   \   C
        |    \
        |     \
        |______\

           B
  */
  double a;
  double b;
  double c;

  printf("enter side A: ");
  scanf("%lf", &a);

  printf("enter side B: ");
  scanf("%lf", &b);

  c = sqrt((a * a) + (b * b));

  printf("side C: %lf", c);
}
