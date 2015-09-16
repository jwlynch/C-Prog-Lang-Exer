#include <stdio.h>

/* print celcius-fahrenheit table
   for fahr in 0,20,40, ... 300 */

main()
{
  float fahr, celcius;
  float lower, upper, step;

  lower = 0;
  upper = 200;
  step = 10;

  fahr = lower;

  printf("%s\t%s\n", "celcius", "fahr");
  
  while (celcius <= upper) {
    fahr = celcius * 9.0 / 5.0 + 32;
    printf("%3.0f\t%6.1f\n", celcius, fahr);
    celcius = celcius + step;
  }
}

