#include <stdio.h>
#define NUMCHARVALUES 128
int main(void){

  int c,i,numchars,j;
  int histogram[NUMCHARVALUES];

  //Initialize the histogram;
  for(i=0;i<NUMCHARVALUES;i++) histogram[i]=0;

  //Tabulate counts of each character.
  while((c=getchar())!=EOF) histogram[c]++;
  for(i=0;i<NUMCHARVALUES;i++) printf("%d\n",histogram[i]);

  //Calculate the total number of characters.
  numchars=0;
  for(i=0;i<NUMCHARVALUES;i++) numchars+=histogram[i];
  printf("%d characters\n",numchars);
  //Report the histogram. For visible characters, place the character next to its histogram.
  printf("ASCII Code\tGlyph\t\tHistogram\n");
  for(i=0;i<NUMCHARVALUES;i++){
    if(histogram[i]>0){
      printf("%3d\t\t",i);
      if(i>32 && i<127){
	printf("%c\t\t",i);
      } else {
	printf("NA\t\t");
      }
      c=100*histogram[i]/numchars;
      printf("%d%%\t\t",c);
      for(j=0;j<c;j++) printf("*");
      printf("\n");
    }
  }

  return 0;

}

