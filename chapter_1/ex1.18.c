#include <stdio.h>
#define MAXLENGTH 1000

int main(void){
  int c;
  int i,j,limit;
  int thisline[MAXLENGTH];

  //Initialize counter through thisline
  i=0;
  //Initialize the limit to indicate that there are not (yet) any printable characters found in the input stream.
  limit=-1;

  //Proceed through the input stream.
  while((c=getchar())!=EOF){

    //If we have no storage for the current character, return an error message.
    if(i==MAXLENGTH){
      printf("Error: line length exceeds allocated storage of %d characters.\n",MAXLENGTH);
      return(-1);
    }

    //Store the current character and set limit appropriately.
   thisline[i]=c;
    i++;
    //The exercise requests the removal of trailing blanks and tabs. We include carriage returns as well, since they are invisible but present in the test text.
    if((c!=' ') && (c!='\t') && (c!='\n') && (c!='\r')){
      limit=i;
    }
    
    //If we have reached the end of a line, flush the storage into the output stream.
    if(c=='\n'){
      for(j=0;j<limit;j++) putchar(thisline[j]);
      //If the line had content, add a new line character."
      if(limit>0) putchar('\n');
      //Reset counters for the next line.
      i=0;
      limit=-1;
    }

  }

  return(0);

}

