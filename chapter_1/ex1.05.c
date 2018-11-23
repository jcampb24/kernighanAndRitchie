#include <stdio.h>

/* print Farhenheit-Celcius table
   for fahr = 300, 280, ..., 0 */

int main(void)
{
  float fahr, celsius;
  int lower, upper, step;

  lower  = 0;    /* lower limit of temperature table. */
  upper  = 300;  /* upper limit of temperature table. */
  step   = 20;   /* step size */

  fahr=lower;
  printf("Temperature Conversion Table\n");
  printf("Fahr\tCelsius\n");
  for(fahr=upper;fahr>=lower;fahr=fahr-step){
    celsius=(5.0/9.0)*(fahr-32);
    printf("%6.2f\t%6.2f\n", fahr, celsius);
  }

}
