#include <stdio.h>
#define SPACES_PER_TAB 8

int main(void){

  int charcount;
  int c,i,j;
  int chunk[SPACES_PER_TAB];

  charcount=0;

  while((c=getchar())!=EOF){

    chunk[charcount]=c;
    charcount++;
    if(charcount==SPACES_PER_TAB){
      //Determine the starting position of any finishing sequence of spaces.
      for(j=SPACES_PER_TAB;j>0 && chunk[j-1]==' ';j--);
      //Print any non-space characters preceeding the tab.
      for(i=0;i<j;i++) putchar(chunk[i]);
      //Print a tab if necessary.
      if(j<SPACES_PER_TAB) putchar('\t');
      charcount=0;
    }

  }
  //Empty the final chunk
  for(j=charcount;j>0 && chunk[j-1]==' ';j--);
  for(i=0;i<j;i++) putchar(chunk[i]);
  if(j<charcount) putchar('\t');

  return(0);
}

