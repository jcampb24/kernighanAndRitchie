#include<stdio.h>

int setbits(int x, int p, int n, int y);

int main(void){

  int x,p,n,y;
  x=0177;
  p=6;
  n=1;
  y=00;
  
  printf("x =\t %o\n",x);
  printf("p =\t %d\n",p);
  printf("n =\t %d\n",n);
  printf("y =\t %o\n",y);
  x=setbits(x,p,n,y);
  printf("f(x) = \t %o\n",x);
  return(0);

}

int setbits(int x, int p, int n, int y){
  int sy;
  int mx;
  //Left shift y by p positions.
  sy = y << p;
  
  //Create a mask for the bits of x we wish to discard, the n bits of x beginning in position p.
  mx = ~(~0 << n) << p;

  //Create the answer.
  x = (~mx & x) | (mx & sy);
  
  return(x);

}
