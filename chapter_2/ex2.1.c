#include<stdio.h>
#include<limits.h>

int main(void){

  int i;
  char c,d;

  //Determine the range of char.
  printf("char:\t");
  printf("minimum = %d\t maximum=%d\n",CHAR_MIN,CHAR_MAX);

  //Determine the range of unsigned char.
  printf("uchar:\t");
  printf("minimum = %d\t maximum=%d\n",0,UCHAR_MAX);

  //Determine the range of int.
  printf("int:\t");
  printf("minimum=%d\t maximum=%d\n",INT_MIN,INT_MAX);

  c=CHAR_MAX;
  d=c+1;
  //It is tempting to use the %c character conversion format in the
  //printf below, but this will not print the corresponding number.
  //It is also tempting to use 'c+1' to replace 'd' below, but printf seems to 
  //promote the result to a true integer, hiding the modulo arithmetic of char.
  printf("c = %d\t c+1=%d\n",c,d);

  return(0);

}
