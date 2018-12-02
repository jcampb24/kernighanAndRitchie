#include<stdio.h>
#define VECTOR_LENGTH 1000000

int binsearch(int x, unsigned long int v[], unsigned long int n);

int main(void){

  int x=50000;
unsigned long  int v[VECTOR_LENGTH];
  int i;

  //Populate v with the identity function of its index.
  for(i=0;i<VECTOR_LENGTH;i++) v[i]=i-1;

  //Find a position at which v[i]=500.
  i=binsearch(x,v,VECTOR_LENGTH);

  //Report the results.
  printf("x\t=\t%d\n",x);
  if(i>=0) printf("i\t=\t%d\n",i);
  else printf("i not found.\n");

  return(0);

}

int binsearch(int x, unsigned long int v[], unsigned long int n){

  int low,mid,high;
  low=0;
  high=n-1;
  mid=(high+low)/2; //Integer division rounds down, so if high=low+1, then mid=low.

  while(low<mid){
    if(v[mid]>x) high=mid;
    else low=mid;
    mid=(high+low)/2;
  }

  //When the loop is over, high=low+1. Our desired solution could be in either spot or in neither of them.
  if(v[high]==x) return(high);
  else if(v[low]==x) return(low);
  else return(-1);
  
}
