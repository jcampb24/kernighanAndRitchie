#include<stdio.h>
#define STRING_LENGTH 100

int expand(char s[], char t[], int n);

int main(void){

  char s[]="-a-m5-9q-r-stuvw-z-";
  char t[STRING_LENGTH];
  expand(s,t,STRING_LENGTH);

  printf("Input string:\t %s\n",s);
  printf("Output string:\t%s\n",t);

  return(0);

}

int expand(char s[], char t[], int n){

  int i,j,k;
  char c;
  for(i=0,j=0;(c=s[i])!='\0' && j<n; i++){
    
    if((c>='0' && c<='9') || (c>='a' && c<='z') || (c>='A' && c<='Z')){
      t[j]=c;
      j++;
    } else if (c=='-'){
      if(i==0 || s[i+1]=='\0'){
	t[j]=c;
	j++;
      } else {
	for(k=s[i-1]+1;k<=s[i+1];k++){
	  t[j]=k;
	  j++;
	}
	i++;
      }
    }
  }
  j = (j<n) ? j : n-1;
  t[j]='\0';
  return(0);
}
