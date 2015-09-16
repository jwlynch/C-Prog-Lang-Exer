#include <stdio.h>

int main(void)
{
  int ch = getchar(), blank_count = 0;
  
  while( ch != EOF )
  {
    if( ch == ' ' )
      ++blank_count;
    else if( ch == '\t' )
      ++blank_count;
    else if( ch == '\n' )
      ++blank_count;
    
    ch = getchar();
  }
  
  printf("there were %d blanks.\n", blank_count);
  
  return 0;
}

