/* ex4.08.ch.c
   This file contains the two functions used for buffered character input by the inverse Polish calculator. 
   As requested for Exercise 4.08, the buffer is exactly one character long. The code eliminates the integer counter bufp.
*/

#include <stdio.h>

//Define external variables used by both functions.
char buf='\0'; //Buffer

//get a character from the buffer, unless that is empty. In that case, get a character from standard input.
int getch(void){
  char c=buf;
  if(buf=='\0')
    c=getchar();
  else {
    c=buf;
    buf='\0';
  }
  return(c);
}

//fill the buffer.
void ungetch(int c){
  if (buf=='\0')
    buf=c;
  else
    printf("ungetch: buffer full.\n");
}
