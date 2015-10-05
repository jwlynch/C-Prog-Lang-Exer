// TCPL exercise 1-10
//
//copy input to output, replacing tabs by \t, backspaces by \b
// and \ chars by \\

#include <stdio.h>

// DEBUG should be t or f
// #define DEBUG t

#ifdef DEBUG
#define DP(str) printf("LOG: %s\n", str)
#else
#define DP(str)
#endif

int main(void)
{
  int ch = getchar();
  
  while(ch != EOF)
  {
    if(ch == '\t')
      printf("\\t");
    else if(ch == '\b')
      printf("\\b");
    else if(ch == '\\')
      printf("\\\\");
    else
      putchar(ch);
    
    ch = getchar();
  }
  
  DP("out of loop since eof reached\n");
  
  return 0;
}

