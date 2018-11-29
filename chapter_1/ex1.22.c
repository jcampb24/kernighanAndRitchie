#include <stdio.h>

#define THRESHOLDLENGTH 10

int main(void){

  int charcount, c;
  charcount=0;

  while((c=getchar())!=EOF){
    charcount++;
    if(charcount>THRESHOLDLENGTH && c==' '){
      putchar('\n');
      charcount=0;
    } else{
      putchar(c);
      if(c=='\n') charcount=0;
    }

  }

}
