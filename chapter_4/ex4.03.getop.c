/* This file contains the code for the |getop| function, more or less as included in the text. */
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

  s[1]='\0'; //By default, the string is empty.
  if (!isdigit(c) && c!='.')
    return(c); //c is not a number or a decimal point, so return it.
  if (isdigit(c)) //Collect any "integer" part of the number.
    while(isdigit(s[++i]=c=getch()));
  if (c=='.') //Collect any fractional part of the number.
    while(isdigit(s[++i]=c=getch()));

  s[i]='\0'; //Terminate the string.
  if (c != EOF)
    ungetch(c);
  return(NUMBER);

}
