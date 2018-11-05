#include <stdio.h>
#define IN 1
#define OUT 0

int main(void){
  int c;
  int state;
  state=OUT;
  while((c=getchar())!=EOF){
    if(state==OUT){
      putchar(c);
      if(c=='\n') state=IN;
    } else if (state==IN){
      if(c!=' ' && c!= '\t'){
	state=OUT;
	putchar(c);
      }
    }
  }
}
