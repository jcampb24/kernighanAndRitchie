#include <stdio.h>

main(){

  int c;
  while((c=getchar())!=EOF){

    if(c=='\b'){ 
      putchar('\\');
      putchar('b');
    } else if (c=='\t'){
      putchar('\\');
      putchar('t');
    } else if (c=='\n'){
      putchar('\\');
      putchar('n');
    } else putchar(c);

  }


}
