#include<stdio.h>
#define MAX_LENGTH 100

int escape(char s[], char t[]);

int main(void){

  char s[]="Jeff\tCampbell\n";
  char t[2*MAX_LENGTH];
  int i,length;

  
  //Feed the string to the escape function.
  escape(s,t);

  //Report the output.
  printf("Original string:\n");
  for(i=0;s[i]!='\0';i++) putchar(s[i]);
  putchar('\n');
  printf("Escaped string:\n");
  for(i=0;t[i]!='\0';i++) putchar(t[i]);
  putchar('\n');

}

int escape(char s[], char t[]){

  int i,j;
  
  for(i=j=0;s[i]!='\0';i++){
    switch(s[i]){
    case '\n':
      t[j]='\\';
      t[j+1]='n';
      j=j+2;
      break;
    case '\t':
      t[j]='\\';
      t[j+1]='t';
      j=j+2;
      break;
    default:
      t[j]=s[i];
      j++;
      break;
    }
  }
  t[j+1]='\0';

  return(0);

}
