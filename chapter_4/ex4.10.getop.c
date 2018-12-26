/* This file contains the code for the |getop| function, modified to complete Exercise 4.10. */
#include <stdio.h>
#include <ctype.h> //for |isdigit|.
#define NUMBER '0'
#define MAX_LINE_LENGTH 100


int getline2(char s[], int lim);
int getchar2(void);
void rewind2(void);

char line[MAX_LINE_LENGTH];
int nLine=0; //Length of the line.
int iLine=0; //Current position in the line.
int lastLine=0; //Indicator for hitting EOF on the current line.

//|getop|: Get the next operator or operand.
int getop(char s[]){

  int i,c;
  //Skip white space.
  while((s[0]=c=getchar2())==' ' || c == '\t');

  s[1]='\0'; // Prepare for the possibility that the input is complete.
  if (!isdigit(c) && c!='.' && c!='-')
    return(c); //c is not a number, a decimal point or a minus sign, so return it.
  i=0;
  if (c=='-'){ //If we stopped on a minus sign, process it correctly. It is the unary minus operator if immediately followed by a digit or by a decimal point. Otherwise, it is the binary subtraction operator.
    c=getchar2();
    if(!isdigit(c) && c!='.') return('-');
    else s[++i]=c;
  }
  if (isdigit(c)) //Collect any "integer" part of the number.
    while(isdigit(s[++i]=c=getchar2()));
  if (c=='.') //Collect any fractional part of the number.
    while(isdigit(s[++i]=c=getchar2()));

  s[i]='\0'; //Terminate the string.
  //Set the state so that the character which was last read is ready to be read on the next round.
  rewind2();
  return(NUMBER);

}

int getline2(char s[], int lim){

  int c,i;
  i=0;
  while(--lim>1 && (c=getchar())!=EOF && c!='\n')
    s[i++]=c;
  if(c==EOF) lastLine=1;
  s[i++]='\n';
  s[i]='\0';
  return(i);

}

int getchar2(void){

  if(iLine<nLine){
  } else if(lastLine==1)
    return(EOF);
  else{
    nLine=getline2(line,MAX_LINE_LENGTH);
    iLine=0;
  }
  return(line[iLine++]);
}

void rewind2(void){
  iLine--;
}

