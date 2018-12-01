#include<stdio.h>

char lower(char);

int main(void){

  char c='J';
  printf("c\t=\t%c\n",c);
  printf("lower(c)\t=\t%c\n",lower(c));

  c='e';
  printf("c\t=\t%c\n",c);
  printf("lower(c)\t=\t%c\n",lower(c));
 
}

char lower(char c){

  return((c>='A' && c<='Z') ? c-'A'+'a' : c);

}
