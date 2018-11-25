#include <stdio.h>
#define NUMCHARVALUES 128
#define VISIBLE_MINIMUM 33
#define VISIBLE_MAXIMUM 126

//Creates a character histogram for extended-ASCII/UTF-8 input.
int main(void){

  int c,i,j;
  long numchars, numextends, histogram[NUMCHARVALUES];

  //Initialize the histogram;
  for(i=0;i<NUMCHARVALUES;i++) histogram[i]=0;
  numextends=0;

  //Tabulate counts of each character.
  while((c=getchar())!=EOF) 
    {
      if(c<0){ 
	printf("Error, negative character value: %d.",c); 
	return(-1);
      }
      else if(c<NUMCHARVALUES) histogram[c]++;
      else numextends++;
    }

  //Calculate the total number of characters.
  numchars=numextends;
  for(i=0;i<NUMCHARVALUES;i++) numchars+=histogram[i];

  //Report the histogram. For visible characters, place the character next to its histogram.
  printf("ASCII Code\tGlyph\t\tHistogram\n");
  for(i=0;i<NUMCHARVALUES;i++){
    if(histogram[i]>0){
      printf("%3d\t\t",i);
      if(i>=VISIBLE_MINIMUM && i<=VISIBLE_MAXIMUM){
	printf("%c\t\t",i);
      } else {
	printf("NA\t\t");
      }
      c=100*histogram[i]/numchars;
      printf("%4.2f%%\t\t",100.0*histogram[i]/numchars);
      for(j=0;j<c;j++) printf("*");
      printf("\n");
    }
  }
  printf("Extended\t\t\t");
  printf("%4.2f%%\t\t",100.0*numextends/numchars);
  c=100*numextends/numchars;
  for(j=0;j<c;j++) printf("*");
  printf("\n");

  return 0;

}

