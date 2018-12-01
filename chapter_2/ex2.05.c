#include<stdio.h>

int any(char[],char[]);

int main(void){

  char s1[]="Jeffrey Robert Campbell";
  char s2[]="BigBird";

  printf("s1 = \t %s\n",s1);
  printf("s2 = \t %s\n",s2);
  printf("any(s1,s2) = \t %d\n",any(s1,s2));

}

//Returns the leftmost location in string 1 where any character in string 2 occurs.
int any(char s1[], char s2[]){

  int loc=-1;
  int i,j;
  for(i=0;s2[i]!='\0';i++){
    for(j=0;s1[j]!='\0';j++){
      if(s2[i]==s1[j] && (loc<0 || j<loc)) loc=j;
    }
  }

  return(loc);

}
