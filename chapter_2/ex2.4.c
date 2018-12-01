#include<stdio.h>

void squeeze(char[],char[]);

int main(void){

  char s[]="Jeffrey Robert Campbell";
  char t[]="elmo";

  printf("s =\t %s\n",s);
  printf("t =\t %s\n",t);
  squeeze(s,t);
  printf("s-t =\t=%s\n",s);

}

void squeeze(char s[],char t[]){
  int i,j,k;
  for(k=0;t[k]!='\0';k++){
    for(i=j=0;s[i]!='\0';i++)
      if(s[i]!=t[k]) s[j++]=s[i];
    s[j]='\0';
  }
}
