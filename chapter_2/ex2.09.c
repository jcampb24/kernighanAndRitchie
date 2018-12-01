/*
If an integer is odd, then subtracting one from it simply flips its rightmost one bit to a zero and leaves all other bits unchanged. If instead the integer is even, subtracting one flips its rightmost one bit with a one, replaces all of the zero bits to its right with ones and leaves all other bits unchanged. "Anding" this with the original x yields the original integer with its rightmost one flipped to zero.

We can write a ``faster'' version of bitcount by noting that it only takes applying this operation once for each positive bit to reduce the original integer to zero. In contrast, the bit shift operator requires at least this many if not more operations. Furthermore, we need only count the number of operations required rather than test after each one if the rightmost bit equals zero.

 */

#include<stdio.h>

int bitcount(unsigned x);

int main(void){

  unsigned char x=126;
  printf("x\t=\t%d\n",x);
  printf("f(x)\t=\t%d\n",bitcount(x));
  return(0);

}

int bitcount(unsigned x){

  unsigned int b;
  for(b=0;x!=0;x&=(x-1)) b++;
  return(b);
}
