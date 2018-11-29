#include <stdio.h>
#define IN 1
#define OUT 0

int startcomment(int[]);
int endcomment(int[]);
int startquote(int[]);
int endquote(int[]);

int main(void){

  int inquote, incomment;
  int lasttwochars[2];
  int c,j,r;

  for(j=0;j<2;j++) lasttwochars[j]=-1; /* Dummy initialization. */
  while((c=getchar())!=EOF){

    /* Copy the current character into lasttwochars and shift its contents appropriately. */
    lasttwochars[0]=lasttwochars[1];
    lasttwochars[1]=c;

    /* If we are not in a quote, see if the last two characters start a comment. If so, take appropriate action. */
    if(inquote==OUT){
      if((inquote=startquote(lasttwochars))){ //We are starting a quote. Change the state and feed the output stream.
	if(lasttwochars[0]>=0) putchar(lasttwochars[0]);
      }
      else { //We are not starting a quote. See if we are starting a comment.
	r=startcomment(lasttwochars);
	if(r==1){ //A block comment has started. Search for its end.
	  incomment=IN;
	  while(incomment==IN){
	    c=getchar();
	    if(c==EOF) return(0); //The file ended with an open block comment. 
	    lasttwochars[0]=lasttwochars[1];
	    lasttwochars[1]=c;
	    if(endcomment(lasttwochars)){//We found the comment's end. Switch the state and reset lasttwochars.
	      incomment=OUT;
	      for(j=0;j<2;j++) lasttwochars[j]=-1;
	    }
	  }
	} else if (r==2) { //An inline comment has started. Search for its end.
	  incomment=IN;
	  while(incomment==IN){
	    c=getchar();
	    if(c==EOF) return(0); //The file ended with an open inline comment.
	    if(c=='\n'){ //We have found the comment's end. Switch the state, Feed the newline to the output stream, and reset lasttwochars.
	      incomment=OUT;
	      putchar('\n');
	      for(j=0;j<2;j++) lasttwochars[j]=-1;
	    } else {
	      lasttwochars[0]=lasttwochars[1];
	      lasttwochars[1]=c;
	    }
	    
	  }
	} else if (r==0) { //We have not started a comment. Feed the previous character to output.
	  if(lasttwochars[0]>=0) putchar(lasttwochars[0]);
	} else { //startcomment gave an unknown return value. Return an error.
	  printf("Error: startcomment returned %d.\n",r);
	}
      }
    } else { // If we are in a quote, feed the output stream and look to see if the current character ends it.
      if(lasttwochars[0]>=0) putchar(lasttwochars[0]);
      if(endquote(lasttwochars)==inquote) inquote=OUT;
    }
  }
  
  return(0);
}

int startcomment(int twochars[]) {
  if(twochars[0]=='/' && twochars[1]=='*') return(1);
  if(twochars[0]=='/' && twochars[1]=='/') return(2);
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
