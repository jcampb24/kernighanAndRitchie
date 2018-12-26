/* ex4.03.main.c
   This file contains the |main| function for the reverse Polish calculator, more or less as given in the text. It serves as the base for the next eight exercises.*/

#include<stdio.h>
#include<stdlib.h> //for |atof()|

#define MAXOP 100  //maximum size of operand or operator
#define NUMBER '0' //signal returned to indicate a number was returned.

int    getop(char[]);
void   push(double);
double pop(void);

int main(void){

  int type;
  double op2; //Used to store operand when order of evaluation matters.
  char s[MAXOP]; //Used to store operator and operand.

  while ((type=getop(s)) != EOF) {
    switch (type) {
      
    case NUMBER: //We have found a number. Push it onto the stack.
      push(atof(s));
      break;

    case '+': //Add the top two operands on the stack and push the result back to the stack.
      push(pop()+pop()); 
      break;

    case '*': //Multiply the top two operands on the stack and push the result back to the stack.
      push(pop()*pop());
      break;

    case '-': //Subtract the stack's top element from that just below it. Push the result back to the stack.
      op2=pop();
      push(pop()-op2);
      break;

    case '/': //Divide the stack's second element by its top element. Check for a division by zero error. Push the result back to the stack.
      op2=pop();
      if(op2 !=0.0)
	push(pop()/op2);
      else
	printf("error: divisor equals zero.\n");
      break;

    case '%': // Calculate the stack's second element mod its first element.
      op2=pop();
      push((int)pop() % (int) op2);
      break;

    case'\n': //Pop the stack's top element and display it.
      printf("\t%.8g\n",pop());
      break;

    default:
      printf("error: unknown operator: %s\n",s);
      break;

    }

  }

  return(0);
}
