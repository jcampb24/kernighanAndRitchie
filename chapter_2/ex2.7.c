#include <stdio.h>

int invert(int x, int p, int n);

int main(void){

  int x,p,n;
  x=0177;
  p=5;
  n=2;

  printf("x\t=\t%d\n",x);
  printf("p\t=\t%d\n",p);
  printf("n\t=\t%d\n",n);
  printf("f(x)\t=\t%d\n",invert(x,p,n));

}

int invert(int x, int p, int n){
  
  int mx;
  //Create a mask for the bits of x we wish to invert, the n bits beginning in position p.
  mx = ~(~0 << n) << p;

  //Calculate the answer.
  x = (~mx & x) | (mx & ~x);

  return(x);

}
