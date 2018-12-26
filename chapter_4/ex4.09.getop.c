/* This file contains the code for the |getop| function, modified to complete Exercise 4.3. */
#include <stdio.h>
#include <ctype.h> //for |isdigit|.
#define NUMBER '0'

int  getch(void);
void ungetch(int);

//|getop|: Get the next operator or operand.
int getop(char s[]){

  int i,c;
  //Skip white space.
  while((s[0]=c=getch())==' ' || c == '\t');

  s[1]='\0'; // Prepare for the possibility that the input is complete.
  if (!isdigit(c) && c!='.' && c!='-')
    return(c); //c is not a number, a decimal point or a minus sign, so return it.
  i=0;
  if (c=='-'){ //If we stopped on a minus sign, process it correctly. It is the unary minus operator if immediately followed by a digit or by a decimal point. Otherwise, it is the binary subtraction operator.
    c=getch();
    if(!isdigit(c) && c!='.') return('-');
    else s[++i]=c;
  }
  if (isdigit(c)) //Collect any "integer" part of the number.
    while(isdigit(s[++i]=c=getch()));
  if (c=='.') //Collect any fractional part of the number.
    while(isdigit(s[++i]=c=getch()));

  s[i]='\0'; //Terminate the string.
  ungetch(c);
  return(NUMBER);

}
