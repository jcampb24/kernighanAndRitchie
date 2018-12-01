#include<stdio.h>
#include<limits.h>

unsigned int rightrot(unsigned int x, unsigned int n);
int bitsinint(void);

int main(void){

  unsigned int x,n;
  x=0177;
  n=4;
  printf("x\t=\t%u\nn\t=\t%u\nf(x)\t=\t%u\n",x,n,rightrot(x,n));
  n=bitsinint();
  printf("Bits in an int = %d\n",n);
  return(0);
}

//Function to calculate the number of bits in an int by left shifting the highest int into a zero.
int bitsinint(void){

  unsigned int x=~0;
  int b=0;
  while (x!=0){
    x=x>>1;
    b=b+1;
  }
  return(b);

}

unsigned int rightrot(unsigned int x, unsigned int n){

  unsigned int b,y,mx,my;
  
  //Copy x into y;
  y=x;
  //Right shift x by n bits.
  x=x>>n;
  //We just drove n bits of x off into the ether.
  b=bitsinint();
  
  //Left shift y by b-n bits.
  y=y<<(b-n);

  //Create a mask of the bits we wish to keep from y.
  my = ~0<<(b-n);
  
  //Calculate the answer.
  x=(x & ~my) | (y & my);

  return(x);
}
