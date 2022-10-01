#include <stdio.h>

int main(int argc, char *argv[])
{
  // %.1  = 1 decimal precision
  // %1   = minimum field width
  // %-   = left align

  float item1 = 7.85;
  float item2 = 20.00;
  float itme3 = 140.102;

  printf("item 1: $%.2f\n", item1);
  printf("item 2: $%-12.2f\n", item2);
}
