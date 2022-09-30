#include <stdbool.h>

int main(int argc, char *argv[])
{
  char a = 'C';                           // single character                                 %c (char)
  char b[] = "C++";                       // array of characters                              %s (string)
  
  float c = 3.141592;                     // 4 bytes (32 bits of precision) 6 - 7 digits      %f (float)
  double d = 3.141592653589793;           // 8 bytes (64 bits of precision) 15 - 16 digits    %lf (long float)
  
  bool e = true;                          // 1 byte (true or false)                           %d (1 or 0)
  
  char f = 107;                           // 1 byte (-128 to +127)                            %d or %c
  unsigned char g = 190;                  // 1 byte (0 to +255)                               %d or %c
  
  short h = 32767;                        // 2 bytes (-32768 to +32767)                       %d
  unsigned short i = 65535;               // 2 bytes (0 to +65535)                            %d

  int j = 2147483647;                     // 4 bytes (-2147483648 to +2147483647)             %d
  unsigned int k = 4294967295;            // 4 bytes (0 to +4294967295)                       %u
  
  long long int l = 9223372036854775807;  // 8 bytes (-9 quintillion to +9 quintillion)       %d 

  return 0;
}
