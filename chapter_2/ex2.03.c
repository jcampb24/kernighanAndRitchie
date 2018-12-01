#include<stdio.h>
#define STRINGLENGTH 6
int htoi(char[]);

int main(void){

  char s[]="0xa23f";

  printf("%s = %d\n",s,htoi(s));

  return(0);

}

int htoi(char s[]){

  int i,n,v;
  n=i=0;
  if(s[0]=='0' && (s[1]=='x' || s[1]=='X')) i=2;
  while(s[i]!='\0'){
    if(s[i]>='0' && s[i]<='9') v=s[i]-'0';
    else if (s[i]>='a' && s[i]<='f') v=9+s[i]-'a';
    else if (s[i]>='A' && s[i]<='F') v=9+s[i]-'A';
    else{ 
      printf("Invalid hexidecimal input:\t %s\n",s);
      return(-1);
    }
    n=16*n+v;
    i++;
  }

  return(n);

}
