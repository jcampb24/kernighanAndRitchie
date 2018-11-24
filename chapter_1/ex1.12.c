#include <stdio.h>
#define IN  1
#define OUT 0
//Program to copy its input with each word on a separate line.
//Multiple white-space characters are ignored.

int main(void){

  int c,state;
  state=OUT; //Initialize the state to be out of a word.
  while((c=getchar())!=EOF){
    if(c== ' ' || c == '\t' || c == '\n')//The current character is white space
      {
      if(state==IN) //We have encountered the end of a word.
	{
	  state=OUT;     //Switch the state to OUT, and
	  putchar('\n'); //end the word with a newline character.
	}
      }
    else //The current character is not white space.
      {
	if(state==OUT) state=IN; //Change the state to IN if required.
	putchar(c);             //Put the current character into output.
      }
  }
}
