#include <stdio.h>
#define OUT 0
#define INBLOCK 1
#define ININLINE 2

int startcomment(int[]);
int endcomment(int[]);
int startquote(int[]);
int endquote(int[]);

int main(void){
  {
  int inquote, incomment;
  int lasttwochars[2];
  int c,j,r;
  int nparens,nbrackets,nbraces;
  inquote=incomment=OUT;
  nparens=nbrackets=nbraces=0;
  
  for(j=0;j<2;j++) lasttwochars[j]=-1; /* Dummy initialization. */
  while((c=getchar())!=EOF){

    //Update lasttwochars.
    lasttwochars[0]=lasttwochars[1];
    lasttwochars[1]=c;
    
    if(inquote==OUT && incomment==OUT){
      //Check for opening parens, brackets, and braces.
      if(c=='(') nparens++;
      if(c=='[') nbrackets++;
      if(c=='{') nbraces++;

      //Check for closing parens, brackets, and braces.
      if(c==')') nparens--;
      if(c==']') nbrackets--;
      if(c=='}') nbraces--;
      
      //Check to see if we are entering a comment.
      incomment=startcomment(lasttwochars);

      //Check to see if we are entering a quote.
      inquote=startquote(lasttwochars);

    } else if(inquote!=OUT) { //Test for the end of the quote.
      if(endquote(lasttwochars)==inquote) inquote=0;
    } else if(incomment==INBLOCK) {//Test for the end of a block comment.
      if(endcomment(lasttwochars)==1) incomment=0;
    } else if(incomment==ININLINE) {//Test for the end of an inline comment.
      if(lasttwochars[1]=='\n') incomment=0;
    } else {//Report an error. We should never reach here.}
      printf("Error: Reached impossible state.\n");
    }

  }

  if(nparens==0 && nbrackets==0 && nbraces==0){
    return(0);
  } else {
    printf("Unbalanced delimiters in source.\n");
    printf("Parentheses:\t%d\n",nparens);
    printf("Brackets:\t%d\n",nbrackets);
    printf("Braces:\t%d\n",nbraces);
    if(nparens!=0) return(nparens);
    if(nbrackets!=0) return(nbrackets);
    return(nbraces);
  }
}

int startcomment(int twochars[]) {
  if(twochars[0]=='/' && twochars[1]=='*') return(INBLOCK);
  if(twochars[0]=='/' && twochars[1]=='/') return(ININLINE);
  return(0);
}

int endcomment(int twochars[]) {
  if(twochars[0]=='*' && twochars[1]=='/') return(1);
  return(0);
}

int startquote(int twochars[]) {
  if(twochars[0]!='\\' && twochars[1]=='\'') return(1);
  if(twochars[0]!='\\' && twochars[1]=='\"') return(2);
  return(0);
}

int endquote(int twochars[]){
  return(startquote(twochars));
}
