/* This file contains the code for the |getop| function, modified to complete Exercise 4.11. */
#include <stdio.h>
#include <ctype.h> //for |isdigit|.
#define NUMBER '0'


//|getop|: Get the next operator or operand.
int getop(char s[]){

  int i,c;
  static int buf='\t';
  
  if(buf=='\t' || buf== ' '){
  //Skip white space.
    while((s[0]=c=getchar())==' ' || c == '\t');
  } else {
    c=buf;
  }
  s[1]='\0'; // Prepare for the possibility that the input is complete.
  if (!isdigit(c) && c!='.' && c!='-')
    return(c); //c is not a number, a decimal point or a minus sign, so return it.
  i=0;
  if (c=='-'){ //If we stopped on a minus sign, process it correctly. It is the unary minus operator if immediately followed by a digit or by a decimal point. Otherwise, it is the binary subtraction operator.
    c=getchar();
    if(!isdigit(c) && c!='.') return('-');
    else s[++i]=c;
  }
  if (isdigit(c)) //Collect any "integer" part of the number.
    while(isdigit(s[++i]=c=getchar()));
  if (c=='.') //Collect any fractional part of the number.
    while(isdigit(s[++i]=c=getchar()));
  if(c!=EOF)
    buf=c;
  s[i]='\0'; //Terminate the string.
  return(NUMBER);

}
