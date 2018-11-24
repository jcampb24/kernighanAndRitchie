#include <stdio.h>

int main(void){

  int c;
  while((c=getchar())!=EOF){

    if(c=='\b'){ 
      putchar('\\');
      putchar('b');
    } else if (c=='\t'){
      putchar('\\');
      putchar('t');
    } else if (c=='\\'){
      putchar('\\');
      putchar('\\');
    } else putchar(c);

  }


}
