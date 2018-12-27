/*
ex4.12.c
This file implements the recursive version of itoa, which eliminates the need to call reverse().
*/

#include<stdio.h>
#include<string.h>

#define STRING_LENGTH 100

void itoa(int n, char s[]);

int main(void){

  int n;
  char s[STRING_LENGTH];

  n=-9;
  itoa(n,s);
  printf("%s\n",s);
  n=-90;
  itoa(n,s);
  printf("%s\n",s);
  n=-23865;
  itoa(n,s);
  printf("%s\n",s);
  n=-45290;
  itoa(n,s);
  printf("%s\n",s);
  n=1001238;
  itoa(n,s);
  printf("%s\n",s);
  return(0);
}

//This version of itoa has a bug when handling the largest negative integer.
void itoa(int n, char s[]){

  int i, sign;
  static int depth=0; //Keeps track of recursion depth.
  static int pos=0; //Keeps track of the position in the string.

  if((sign=n)<0) {
    n = -n;
  } 

  if(n/10){
    depth++;
    itoa(n/10,s);
    depth--;
  } 

  s[pos++]=n%10 + '0';

  //End the string if appropriate.
  if(depth==0){
    s[pos]='\0';
    pos=0; //Set the position for the next time itoa is called externally.
  } 
    
}

