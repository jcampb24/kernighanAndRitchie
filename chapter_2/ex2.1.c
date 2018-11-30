#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void){

  char c,d;
  unsigned char uc,ud;
  signed char sc,sd;

  int i,j;
  unsigned int ui,uj;

  short int si,sj;
  unsigned short int usi,usj;

  long int li,lj;
  unsigned long int uli,ulj;

  printf("Integer type limits from header:\n\n");

  //Determine the range of char from the header.
  printf("char:\t");
  printf("minimum = %d\t maximum=%d\n",CHAR_MIN,CHAR_MAX);

  //Determine the range of unsigned char from the header.
  printf("uchar:\t");
  printf("minimum = %d\t maximum=%d\n",0,UCHAR_MAX);

  //Determine the range of a signed char from the header.
  printf("schar:\t");
  printf("minimum = %d\t maximum=%d\n",SCHAR_MIN,SCHAR_MAX);

  //Determine the range of int from the header.
  printf("int:\t");
  printf("minimum=%d\t maximum=%d\n",INT_MIN,INT_MAX);

  //Determine the range of unsigned int from the deader.
  printf("uint:\t");
  printf("minimum = %u\t maximum=%u\n",0U,UINT_MAX);

  //Determine the range of short int from the header.
  printf("short:\t");
  printf("minimum=%d\t maximum=%d\n",SHRT_MIN,SHRT_MAX);

  //Determine the range of an unsigned short int from the header.
  printf("unsigned short:\t");
  printf("minimum=%u\t maximum=%u\n",0U,USHRT_MAX);

  //Determine the range of long int from the header.
  printf("long int:\t");
  printf("minimum=%ld\t maximum=%ld\n",LONG_MIN,LONG_MAX);

  //Determine the ranke of unsigned long int from the header.
  printf("unsigned long:\t");
  printf("minimum=%lu\t maximum=%lu\n",0LU,ULONG_MAX);

  printf("\n");
  printf("Computed limits for integer types:\n\n");

  //Under modular arithmetic, adding one to the upper bound yields the lower bound.
  //Use this to find both the upper and lower bounds with an empty for loop.

  //char
  for(c=0;c<(d=c+1);c++);
   //It is tempting to use the %c character conversion format in the
  //printf below, but this will not print the corresponding number.
  //It is also tempting to use 'c+1' to replace 'd' below, but printf seems to 
  //promote the result to a true integer, hiding the modulo arithmetic of char.
  printf("char:\t minimum=%d\t maximum=%d\n",d,c);
  
  //unsigned char
  for(uc=0;uc<(ud=uc+1);uc++);
  printf("unsigned char:\t minimum=%d\t maximum=%d\n",ud,uc);

  //signed char
  for(sc=0;sc<(sd=sc+1);sc++);
  printf("signed char:\t minimum=%d\t maximum=%d\n",sd,sc);

  //int
  for(i=0;i<(j=i+1);i++);
  printf("int:\t minimum=%d\t maximum=%d\n",j,i);

  //unsigned int
  for(ui=0;ui<(uj=ui+1);ui++);
  printf("unsigned int:\t minimum=%u\t maximum=%u\n",uj,ui);

  //short int
  for(si=0;si<(sj=si+1);si++);
  printf("short int:\t minimum=%d\t maximum=%d\n",sj,si);

  //unsigned short int
  for(usi=0;usi<(usj=usi+1);usi++);
  printf("unsigned short int:\t minimum=%u\t maximum=%u\n",usj,usi);

  //long int
  //My back of the envelope calculation says that applying the algorithm blindly
  //will require over 100 years. To speed things up a bit, we initialize li at a number only slightly below
  //the maximum declared in the header.
  for(li=LONG_MAX-10;li<(lj=li+1);li++);
  printf("long int:\t minimum=%ld\t maximum=%ld\n",lj,li);

  //unsigned long int
  for(uli=ULONG_MAX-10;uli<(ulj=uli+1);uli++);
  printf("unsigned long int:\t minimum=%lu\t maximum=%lu\n",ulj,uli);

  printf("\n");
  printf("Limits for floating-point types:\n");

  //float
  printf("float:\t minimum=%e\t maximum=%e\n",FLT_MIN,FLT_MAX);

  //double
  printf("double:\t minimum=%e\t maximum=%e\n",DBL_MIN,DBL_MAX);

  return(0);

}
