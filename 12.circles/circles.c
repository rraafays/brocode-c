#include <stdio.h>

int main(int argc, char *argv[])
{
  const double PI = 3.14159; // because PI is a predefined real value we make it a constant so that it cannot be reassigned

  // various variables for our values
  double r;
  double c;
  double a;

  printf("enter radius: "); // prompts user for a radius
  scanf("%lf", &r); // assigns the value of the users input to the address of r

  c = 2 * PI * r; // circumference = 2πr
  a = PI * r * r; // area = π^2

  printf("circumference = %.2lf\n", c);
  printf("radius = %.2lf\n", a);

  return 0;
}
