#include<stdio.h>
#include<string.h>

#define STRING_LENGTH 100

void itoa(int n, char s[], int w);
void reverse(char s[]);

int main(void){

  int n,w;
  char s[STRING_LENGTH];

  n=-9;
  w=6;
  itoa(n,s,w);
  printf("%s\n",s);
  n=90;
  itoa(n,s,w);
  printf("%s\n",s);
  n=23865;
  itoa(n,s,w);
  printf("%s\n",s);
  n=-45290;
  itoa(n,s,w);
  printf("%s\n",s);
  n=1001238;
  itoa(n,s,w);
  printf("%s\n",s);
  return(0);
}

void itoa(int n, char s[], int w){

  int i, sign;

  if((sign=n)>0) 
    n = -n;
  i=0;
  do{
    s[i++]= -(n % 10) + '0';
  } while ((n/=10) < 0);
  if(sign < 0) 
    s[i++]='-';
  while(i<w) s[i++]=' ';
  s[i]='\0';
  reverse(s);    

}

void reverse(char s[]){

  int c, i, j;
  for(i=0, j=strlen(s)-1; i<j; i++, j--) c=s[i], s[i]=s[j], s[j]=c;

}
