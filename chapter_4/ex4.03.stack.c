/* ex4.03.stack.c
This contains the stack management functions |push| and |pop| more or less as given in the text. It also defines the external variables they require, the stack itself and the next free position on it.
*/
#include<stdio.h>
#define MAXVAL 100 // Maximum stack depth

int sp=0;         //Next free stack position
double val[MAXVAL];//The stack itself

/* push: push |f| onto the stack. */
void push(double f){

  if(sp<MAXVAL)
    val[sp++]=f; //The post-increment operator has its effect after |sp| is used as an index.
  else
    printf("error: Cannot push %g onto a full stack.\n",f);

}

double pop(void){

  if(sp>0)
    return val[--sp]; //The pre-decrement operator has its effect before |sp| is used as an index.
  else{
    printf("error: Cannot pop from an empty stack.\n");
    return(0.0);
  }
}

