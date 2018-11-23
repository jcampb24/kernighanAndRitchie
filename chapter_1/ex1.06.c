#include <stdio.h>

int main(void){

  int c;
  while((c=getchar())!=EOF);
  printf("Final input was %d \n",c);
}
