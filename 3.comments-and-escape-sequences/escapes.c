#include <stdio.h>

int main(int argc, char *argv[])
{
  /*
    escape sequence = character combination consisting of a backslash '\'
    followed by a letter or combination of digits,
    they specifiy actions within a line or string of text.
    \n = newline
    \t = tab
  */

  printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
  printf("\"I like pizza\" - Abraham Lincoln proabably");

  return 0;
}
