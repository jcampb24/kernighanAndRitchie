/* ex4.09.ch.c
   This file contains the two functions used for buffered character input by the inverse Polish calculator. 
   This version defines buf to be an integer array so that it can store an EOF, which stdio.h defines to -1.
*/

#include <stdio.h>
#define BUFSIZE 100

//Define external variables used by both functions.
int buf[BUFSIZE]; //Buffer
int bufp=0; //Next free position in |buf|.

//get a character from the buffer, unless that is empty. In that case, get a character from standard input.
int getch(void){
  return((bufp>0) ? buf[--bufp]:getchar());
}

//put a character into the buffer
void ungetch(int c){
  if(bufp>=BUFSIZE)
    printf("ungetch: too many chacters\n");
  else
    buf[bufp++]=c;
}
