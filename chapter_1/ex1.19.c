#include <stdio.h>
#define MAXLENGTH 10000

void reverse(int s[], int length);

int main(void){

  int c;
  int thisline[MAXLENGTH];
  int thislength=0;
  int i;

  //Initialize thisline.
  for(i=0;i<MAXLENGTH;i++) thisline[i]='\0';

  while((c=getchar())!=EOF){
    printf("%d ",c);
    if(thislength<MAXLENGTH){
      thisline[thislength]=c;
    } else {
      printf("Error: Maximum line length of %d characters exceeded.\n",MAXLENGTH);
      return(-1);
    }

    thislength++;

    if(c=='\n'){
      reverse(thisline,thislength);
      for(i=0;i<thislength;i++){ 
	putchar(thisline[i]);
	//printf("%d",thisline[i]);
	thisline[i]='\0';
      }
      thislength=0;
    }
  }
  printf("\n");
}

//the reverse function.

void reverse(int s[], int length){
  int temp[MAXLENGTH];
  int i;
  for(i=0;i<MAXLENGTH;i++) temp[i]='\0';

  //Copy the string into temp.
  for(i=0;i<length;i++) temp[i]=s[i];
  
  //Reverse copy the string from temp back into s.
  for(i=length-1;i>=0;i--){
    s[i]=temp[length-1-i];
  }
}
