#include <stdio.h>

int main(void){

  int c;
  while(c=(getchar()!=EOF)){
    printf("Test value = %d.\n",c);
  } 
  printf("Final test value = %d. \n",c);
}
