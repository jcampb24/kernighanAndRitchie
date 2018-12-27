/* ex4.14.c
This file implements the solution to Exercise 4.14 and tests it out.
*/
#include<stdio.h>

#define swap(t,x,y) {char temp=t[x]; t[x]=t[y]; t[y]=temp;}

int main(void){

  char name[]="Jeff";
  swap(name,0,3);
  printf("Swapped name = %s\n",name);

  return(0);

}
    
