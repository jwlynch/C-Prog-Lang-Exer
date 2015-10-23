#include <stdio.h>

// ex-1-9.c
//
// write a program to count blanks, tabs and newlines.

int main(void)
{
  int blank_count = 0;
  int tab_count = 0;
  int newline_count = 0;
  
  int ch = getchar();
  
  while( ch != EOF )
  {
    if( ch == ' ' )
      ++blank_count;
    else if( ch == '\t' )
      ++tab_count;
    else if( ch == '\n' )
      ++newline_count;
    
    ch = getchar();
  }
  
  printf
  (
    "there were %d blanks, %d tabs and %d newlines.\n", 
   blank_count, 
   tab_count, 
   newline_count
  );
  
  return 0;
}

