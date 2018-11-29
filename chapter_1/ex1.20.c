#include <stdio.h>
#define SPACES_PER_TAB 4

int main(void){

  int charsleft;
  int c,i;

  charsleft=SPACES_PER_TAB;

  while((c=getchar())!=EOF){

    if(c=='\t'){
      for(i=1;i<=charsleft;i++) putchar(' ');
      charsleft=SPACES_PER_TAB;
    } else {
      putchar(c);
      if(charsleft>1){
	charsleft--;
      } else {
	charsleft=SPACES_PER_TAB;
      }
    }
  }
  return 0;
}

