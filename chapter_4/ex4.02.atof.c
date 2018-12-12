#include<ctype.h>
#include<stdio.h>
#define MAXLENGTH 1000

int atoi(char s[]);

double atof(char s[]){

  double val,power;
  int i,j,sign,exponent;
  char exponentString[MAXLENGTH];

  for(i=0; isspace(s[i]); i++);
  
  sign = (s[i] == '-') ? -1: 1;
  if (s[i] == '+' || s[i] == '-') i++;
  for(val=0.0; isdigit(s[i]); i++)
    val = 10.0*val + (s[i]-'0');

  power=1.0;

  if(s[i]=='.'){
    for(i++; isdigit(s[i]); i++){
      val = 10.0*val + (s[i]-'0');
      power *= 10.0;
    }
  }
  if(s[i]=='E' || s[i] == 'e'){
    for(i++,j=0;s[i+j]!='\0';j++)
      exponentString[j]=s[i+j];
    exponentString[j]='\0';
    exponent=atoi(exponentString);
    if(exponent>0)
      for(j=0;j<exponent;j++) 
	power/=10.0;
    else 
      for(j=0;j<-exponent;j++)
	power*=10.0;
  }
    
  return(sign*val/power);

}

int atoi(char s[]){

  int i,sign,val;

  for(i=0; isspace(s[i]); i++);
  sign = (s[i] == '-') ? -1: 1;
  if (s[i] == '+' || s[i] == '-') i++;
  for(val=0; isdigit(s[i]); i++)
    val = 10*val + (s[i]-'0');
  
  return(sign*val);

}
