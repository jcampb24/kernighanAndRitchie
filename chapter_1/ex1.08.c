#include <stdio.h>

int main(void){

  int c;
  long nb, nt, nnl;
  nb=nt=nnl=0;
  
  while((c=getchar())!=EOF){

    if(c==' ') nb++;
    else if(c=='\t') nt++;
    else if(c=='\n') nnl++;

  }
  printf("Blanks:\t\t%ld\n",nb);
  printf("Tabs:\t\t%ld\n",nt);
  printf("New Lines:\t%ld\n",nnl);

}
