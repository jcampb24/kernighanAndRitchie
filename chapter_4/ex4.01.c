#include<stdio.h>
#define MAXLINE 1000

int getline2(char s[], int lim);
int strrindex(char s[], char t[]);

int main(void){

  char pattern[]="ould";
  char line[MAXLINE];
  int found = 0;

  while(getline2(line,MAXLINE)>0)
    if(strrindex(line,pattern)>=0){
      printf("%s",line);
      found++;
    }
  printf("%d occurances found.\n",found);
  return(0);
}
