#include<stdio.h>

int main(void){

  int lim=10;
  int i;
  char s[lim];
  char c;

  i=0;
  while(i<lim){
    c=getchar();
    if(c!='\n'){
      if(c!=EOF){
	s[i]=c;
	i++;
      }
    }
  }
  printf("%s",s);
}
