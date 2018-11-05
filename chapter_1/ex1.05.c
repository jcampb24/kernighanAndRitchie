#include <stdio.h>

/* print Farhenheit-Celcius table
   for fahr = 300, 280, ..., 0 */

main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower  = 0;    /* lower limit of temperature table. */
  upper  = 300;  /* upper limit of temperature table. */
  step   = 20;   /* step size */

  fahr=lower;
  printf("Temperature Conversion Table\n");
  printf("Fahr\tCelsius\n");
  for(fahr=upper;fahr>=lower;fahr=fahr-step){
    celsius=5*(fahr-32)/9;
    printf("%d\t%d\n", fahr, celsius);
  }

}
