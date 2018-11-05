#include <stdio.h>
#define MINLENGTH 80
#define IN 1
#define OUT 0

int main(void){

  int c,len,j;
  int thisline[MINLENGTH];
  len=0;

  while((c=getchar())!=EOF){
    if(c == '\n'){
      if(len>=MINLENGTH) putchar(c);
      len=0;
    } else {
      len++;
      if(len<=MINLENGTH) thisline[len-1]=c;
      if (len==MINLENGTH) for(j=0;j<MINLENGTH;j++) putchar(thisline[j]);
      if (len>MINLENGTH) putchar(c);
    }
  }
  printf("\n");
  return 0;
}
