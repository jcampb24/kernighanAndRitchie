#include<stdio.h>

double atof(char s[]);

int main(void){

  char s[]="123.45e-4";
  double f=atof(s);

  printf("Original string:\t%s\n",s);
  printf("Double representation:\t%f\n",f);
  
  

}
