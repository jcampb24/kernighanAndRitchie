#include<stdio.h>
#define MAX_LENGTH 100

int escape(char s[], char t[]);
int entrap(char t[], char s[]);

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

  //Feed the escaped string to the entrap function.
  entrap(t,s);
  //Report the entrapped output.
  printf("Entrapped string:\n");
  for(i=0;s[i]!='\0';i++) putchar(s[i]);
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

int entrap(char t[], char s[]){

  int i,j;
  for(i=j=0;t[i]!='\0';i++){

    switch(t[i]){

    case '\\':
      switch(t[i+1]){
      case 'n':
	s[j]='\n';
	j++;
	break;
      case 't':
	s[j]='\t';
	j++;
	break;
      default:
	s[j]='\\';
	s[j+1]=t[i+1];
	j=j+2;
	break;
      }
      i++;
      break;

    default:
      s[j]=t[i];
      j++;
      break;
    }

  }

  return(0);

}
