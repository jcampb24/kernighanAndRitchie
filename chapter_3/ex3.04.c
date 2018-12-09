/*
In a two's complement system, a byte with all empty bits represents zero, and bytes with zero in the highest-order bit are positive. The byte with a one in the highest order bit and zeros elsewhere represents the lowest possible negative number. The remaining bytes with one in the highest order bit represent the other negative numbers, counting \emph{up} towards -1. Therefore, there is no positive number equal to the negative of the largest negative number. This being so, the negation of the program's input will not create the number desired.

To fix the program, we should work with \emph{negative} numbers. 

 */

#include<stdio.h>
#include<string.h>
#include<limits.h>

#define STRING_LENGTH 100

void itoa(int n, char s[]);
void reverse(char s[]);

int main(void){

  int n;
  char s[STRING_LENGTH];

  n=INT_MAX;
  itoa(n,s);
  
  printf("Use itoa with maximum integer:\n");
  printf("Original integer:\t%d\n",n);
  printf("String representation:\t%s\n",s);
  
  n=INT_MIN;
  itoa(n,s);

  printf("Use itoa with minimum integer:\n");
  printf("Original integer:\t%d\n",n);
  printf("String representation:\t%s\n",s);

  return(0);

}

void itoa(int n, char s[]){

  int i, sign;

  if((sign=n)>0) 
    n = -n;
  i=0;
  do{
    s[i++]= -(n % 10) + '0';
  } while ((n/=10) < 0);
  if(sign < 0) 
    s[i++]='-';
  s[i]='\0';
  reverse(s);    

}

void reverse(char s[]){

  int c, i, j;
  for(i=0, j=strlen(s)-1; i<j; i++, j--) c=s[i], s[i]=s[j], s[j]=c;
}
