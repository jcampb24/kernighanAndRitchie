#include <stdio.h>
#define MAXLENGTH 15
#define IN 1
#define OUT 0

int main(void){

  long histogram[MAXLENGTH];
  int i,c,state,j;
  long numwords;
  
  // Initialize histogram with all zeros.
  for(i=0;i<MAXLENGTH;i++) histogram[i]=0;
  //Initialize the state to be OUT.
  state=OUT;
  //Initialize the word length counter to zero.
  i=0;

  //Cycle through the input characters until we reach the end of the file.
  while((c=getchar())!=EOF){
    //Test to see if the character is or is not white space or punctuation.
    if(c == ' ' || c == '\n' || c == '\t' || c == '.' || c == ',' || c == '!' || c == '?' || c == ':' || c == ';'){
      //If we were in a word, change the state to out, increment the appropriate element of the histogram, and reset the word length counter.
      state=OUT;
      //If we have exceeded the maximum word length, then truncate i at this wordlength.
      if(i>MAXLENGTH) i=MAXLENGTH;
      //Increment the histogram.
      histogram[i-1]++;
      i=0;
    } else {
      //Switch the state if necessary
      if(state==OUT){
	state=IN;
      }
      //Increment the word length counter.
      i++;
    }
  }
  //Calculate the total number of input words.
  numwords=0;
  for(i=0;i<MAXLENGTH;i++) numwords+=histogram[i];

}
