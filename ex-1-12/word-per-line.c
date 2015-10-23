#include <stdio.h>

// Chapter 1: A Tutorial Introduction; Exercise 1-11. 
//
// Exercise 1-12. Write a program 
// that prints its input one word per line.

// alter program from the book in sect 1.5.4

#define IN    1 /* inside a word */
#define OUT   0 /* outside a word */

/* count lines, words and characters in input */

int main(void)
{
  int c, nl, nw, nc, state;
  
  state = OUT;
  nl = nw = nc = 0;
  
  while((c = getchar()) != EOF)
  {
    if (state == IN)
    {
      if (c == ' ' || c == '\n' || c == '\t')
      {
        state = OUT;
        putchar('\n');
      }
      else
        putchar(c);
    }
    else // state == OUT
    {
      if (c == ' ' || c == '\n' || c == '\t')
        continue;
      else
      {
        state = IN;
        putchar(c);
      }
    }
  }
    
  return 0;
}

