#include <stdio.h>
#define MINLENGTH 74
#define IN 1
#define OUT 0
//Program to print all lines from input with MINLENGTH or more characters.
//The strategy is to store each line's first MINLENGTH characters (or fewer for shorter lines). If the line reaches MINLENGTH, then all of the previously stored characters are sent to standard output, as are all further characters in the output.

int main(void){

  int c,len,j; //Integers to store the current character, a running count of the current line's length, and a loop index.
  int thisline[MINLENGTH]; //A character array to store the first MINLENGTH characters of each line.
  len=0;

  while((c=getchar())!=EOF){
    if(c == '\n'){ //If we have reached the end of a line.
      if(len>=MINLENGTH) putchar(c); //Send the final character to standard output,
      len=0; //and reset the length counter.
    } else { //Otherwise, we are still in a line.
      len++; //Increment the running length counter.
      if(len<=MINLENGTH) thisline[len-1]=c; //If the current line has not reached MINLENGTH, store this character.
      if (len==MINLENGTH) for(j=0;j<MINLENGTH;j++) putchar(thisline[j]); //If it just reached MINLENGTH, disgorge the stored characters.
      if (len>MINLENGTH) putchar(c); //If it exceeds MINLENGTH, send the final character to standard output.
    }
  }

  return 0;
}
