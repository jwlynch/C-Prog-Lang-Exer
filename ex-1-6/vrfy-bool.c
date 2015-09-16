#include <stdio.h>

int main(void)
{
  int c; // var for incoming char (will also accomodate EOF)
  int continu = 1; // var to hold true (nonzero) while we want to keep going around following loop
  
  while( continu )
  {
    c = getchar();
    continu = (c != EOF);
    
    printf("c is %c (%d), (c != EOF) is %d.\n", c, c, continu);
  }
  
  printf("out of loop; c is %c (%d), (c != EOF) is %d.\n\n", c, c, continu);

  return 0;
}

