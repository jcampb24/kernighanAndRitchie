/*
ex4.13.c
Provides and tests the recursive version of the reverse() function, which reverses a string in place.
*/

#include<stdio.h>

void reverse(char s[]);

int main(void){

  char test[]="abcdefghijklmnopqrstuvwxyz";
  reverse(test);
  printf("Reversed string = %s\n",test);

  return(0);
}

void reverse(char s[]){

  static int len=0;
  static int lower=0;
  static int upper;
  char temp;

  //If len=0, then we do not yet know its length. Calculate it and initialize upper.
  if(len==0){
    while(s[len]!='\0') len++;
    upper=len-1;
  }

  //If the string is non-trivial, then proceed with its reversal. 
  if(len>1 && lower<upper){

    temp=s[upper];
    s[upper]=s[lower];
    s[lower]=temp;
    upper--;
    lower++;
    reverse(s);

  }
  

}
