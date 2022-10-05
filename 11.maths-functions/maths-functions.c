#include <stdio.h>
#include <math.h> // important to include the math header file

int main(int argc, char *argv[])
{
  double a = sqrt(9);   // returns the square root of the specified variable
  int b = pow(2, 4);    // returns the first variable to the power of the second variable
  int c = round(3.14);  // rounds the value to nearest whole number
  int d = ceil(3.14);   // always rounds the value to the highest whole number
  int e = floor(5.99);  // always rounds the value to the lowest whole number
  int f = fabs(-100);   // returns the absolute value of the variable
  double g = log(10);   // returns log of the variable
  double h = sin(45);   // returns sin of the variable
  double i = cos(45);   // returns cos of the variable
  double j = tan(45);   // returns tan of the variable

  printf("%.2f\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("%d\n", d);
  printf("%d\n", e);
  printf("%d\n", f);
  printf("%f\n", g);
  printf("%f\n", h);
  printf("%f\n", i);
  printf("%f\n", j);
}
