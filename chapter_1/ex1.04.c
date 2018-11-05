#include <stdio.h>

/* print Celcius-Fahrenheit table
   for celsius = -50, -40, ..., 250 */

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower  = -50;    /* lower limit of temperature table. */
  upper  = 250;  /* upper limit of temperature table. */
  step   = 10;   /* step size */

  celsius=lower;
  printf("Temperature Conversion Table\n");
  printf("Celsius\tFahr\n");
  while(celsius<=upper) {
    fahr=(9.0/5.0)*celsius+32.0;
    printf("%3.0f\t%5.1f\n", celsius, fahr);
    celsius+=step;
  }

}
