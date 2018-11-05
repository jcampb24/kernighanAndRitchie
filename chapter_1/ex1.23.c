#include <stdio.h>
#define IN 1
#define OUT 0

int main(void){

  int inquotes, incomment;
  int lasttwochars[2];
  int c;

  for(c=0;c<2;c++) lasttwochars[c]='a'; /* Dummy initialization. */
  while((c=getchar())!=EOF){

    /* If we are NOT in a comment and not in a quote, look to see if the current character starts a quote. */
    if(incomment==OUT && inquote==OUT){
      if(c=='"') inquote==IN;
    }
    
    /* If we are in a quote, look to see if the current character ends it. */
    if(inquote==IN){
      if(c=='"') inquote==OUT;
    }
    

  }


  return 0;
}
