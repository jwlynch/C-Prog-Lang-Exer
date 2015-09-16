#include <stdio.h>

// prints the value of EOF

void main(void)
{
  // put it in an int so the printf call is set up properly
  int eof = EOF;
  
  printf("value of EOF is %d.\n", eof);
}