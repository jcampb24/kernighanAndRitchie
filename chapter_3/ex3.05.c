#include<stdio.h>
#include<string.h>
#define STRING_LENGTH 100

void itob(int n, char s[], int b);
void reverse(char s[]);

int main(void){

  int n,b;
  char s[STRING_LENGTH];

  n=165;
  b=2;
  itob(n,s,b);
  printf("Decimal integer:\t%d\n",n);
  printf("Binary representation:\t%s\n",s);

  b=16;
  itob(n,s,b);
  printf("Hexidecimal representation:\t%s\n",s);

  return(0);
  
}

void itob(int n, char s[], int b){

  int i, remainder, sign;
  
  if((sign=n)>0)
    n=-n;
  i=0;
  do{
    remainder= -(n % b);
    s[i]=remainder+'0';
    if(b>10 && remainder>=10)
	s[i]=remainder-10+'A';
    i++;
  } while ((n/= b)<0);
  s[i]='\0';
  reverse(s);
}

void reverse(char s[]){

  int c, i, j;
  for(i=0, j=strlen(s)-1; i<j; i++, j--) c=s[i], s[i]=s[j], s[j]=c;

}
