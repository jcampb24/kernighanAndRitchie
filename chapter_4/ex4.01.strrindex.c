#include<stdio.h>

int strrindex(char s[], char t[]){

  int i,j,k,l;
  l=-1;
  for(i=0; s[i]!='\0'; i++){
    for(j=i,k=0; t[k]!='\0' && s[j]==t[k]; j++, k++);
    if(k>0 && t[k]=='\0') l=i;
  }
  return(l);
}
