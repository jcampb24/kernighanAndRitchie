#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

float fahr2celsius(int fahr);

int main(void){

  int fahr;
  float celsius;

  printf("Fahr\t\tCelsius\n");
  fahr=LOWER;
  while(fahr<=UPPER){

    printf("%3d\t\t%6.1f\n",fahr,fahr2celsius(fahr));
    fahr+=STEP;

  }
  return 0;
}

float fahr2celsius(int fahr){
  return (5.0/9.0)*(fahr-32.0);
}
