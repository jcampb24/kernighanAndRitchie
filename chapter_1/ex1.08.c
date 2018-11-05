#include <stdio.h>

main(){

  int c;
  long nb, nt, nnl;
  nb=nt=nnl=0;
  
  while((c=getchar())!=EOF){

    if(c==' ') nb++;
    else if(c=='\t') nt++;
    else if(c=='\n') nnl++;

  }
  printf("Blanks:\t\t%d\n",nb);
  printf("Tabs:\t\t%d\n",nt);
  printf("New Lines:\t%d\n",nnl);

}
