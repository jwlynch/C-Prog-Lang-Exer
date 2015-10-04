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
  int ch = getchar(), blank_p = 0;
  
  while(ch != EOF)
  {
    DP("next loop, not eof\n");
    
    if(blank_p)
    {
      DP("in blank state\n");
      
      if(ch == ' ')
      {
        DP("char is space\n");
        
        ch = getchar();
      }
      else
      {
        DP("not space, end of blank state\n");
        
        blank_p = 0;
        putchar(' ');
        putchar(ch);
        ch = getchar();
      }
    }
    else
    {
      DP("not blank state\n");
      
      if(ch == ' ')
      {
        DP("blank, switch to 'isblank' state\n");
        blank_p = 1;
        ch = getchar();
      }
      else // non-space char
      {
        DP("other char, just output it\n");
        
        putchar(ch);
        ch = getchar();
      }
    }
  }
  
  DP("out of loop since eof reached\n");
  
  return 0;
}

