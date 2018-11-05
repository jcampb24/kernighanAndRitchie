#include <stdio.h>

main(){

  int c;
  while(c=(getchar()!=EOF)) printf("Input was %d \n",c);
  printf("Final input was %d \n",c);
}
