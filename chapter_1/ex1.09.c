#include <stdio.h>
#define OUT 0
#define IN  1

main(){

  int c, state;
  state=OUT;
  while((c=getchar())!=EOF){
    if(state==OUT || (state==IN && c != ' ')) putchar(c);
    if((state==OUT) && (c == ' ')) state=IN;
    if((state==IN)  && (c != ' ')) state=OUT;
  }
}
