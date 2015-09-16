#include <stdio.h>

/* pring fahrenheit-celcius table
   for fahr in 0,20,40, ... 300 */

main()
{
  float fahr, celcius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("%s\t%s\n", "fahr", "celcius");
  
  while (fahr <= upper) {
    celcius = 5.0 / 9.0 * (fahr - 32.0);
    printf("%3.0f\t%6.1f\n", fahr, celcius);
    fahr = fahr + step;
  }
}

