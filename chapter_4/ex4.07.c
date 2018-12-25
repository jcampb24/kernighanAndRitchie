/* ex4.07.c
This file demonstrates the function ungets(), which pushes a string to the buffer.
*/

#include<stdio.h>
#define STRING_LENGTH 5
int getch(void);
void ungets(char s[]);

int main(void){


  char s[STRING_LENGTH];
  char c;
  int i=0;

  while((c=getch())!=EOF){

    putchar(c);

    switch(c){
    case '-':
      ungets(s);
      i=0;
      s[i]='\0';
      break;
    default:
      s[i]=c;
      i++;
      s[i]='\0';
      break;
    }
    if(i>=STRING_LENGTH){
      i=0;
      s[i]='\0';
    }
  }

  return(0);
}
