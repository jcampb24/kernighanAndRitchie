#include <stdio.h>
#define MAXLINE 10

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */

int main(void){

  int len; //Current line length
  int max; //longest line length seen so far
  char line[MAXLINE]; //current input line
  char longest[MAXLINE]; //longest line saved here

  max=0;
  while((len = getLine(line,MAXLINE))>0)
    if(len>max) {
      max=len;
      copy(longest,line);
    }
  if (max > 0) //there was a line
    printf("Longest line had %d characters.\n",max);
    printf("%s\n",longest);
  return 0;

}

/* getLine: Read a line into s until it is out of space. Return length */
int getLine(char s[], int lim){
  
  int c, i;
  
  //Read the line until we have hit the end of the file, the end of the line, or the end of the storage.
  for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n'; i++) s[i]=c; 
  if(c=='\n'){ //If the line ended with a newline, then store that and the null character to terminate the array.
    s[i]=c;
    i++;
    s[i]='\0';
  } else if (c==EOF){ //If the line ended with the end-of-file character, terminate the array.
    s[i]='\0';
  } else { //If the line ended because we ran out of storage, keep counting characters.
    while((c=getchar())!=EOF && c!='\n') i++;
  }
  return i;

}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]){
  
  int i;
  
  i=0;
  while((to[i] = from[i]) != '\0') i++;

}
