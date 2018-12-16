/* ex4.0=5.c
   This file contains the |main| function for the reverse Polish calculator enhanced as directed by Exercise 4.5.
*/

#include<stdio.h>
#include<stdlib.h> //for |atof()|
#include<math.h>   //for trigonometric and exponential functions.

#define MAXOP 100  //maximum size of operand or operator
#define NUMBER '0' //signal returned to indicate a number was returned.

int    getop(char[]);
void   push(double);
double pop(void);
double peek(void);
void   clear(void);

int main(void){

  int type;
  double op1, op2; //Used to store operands popped off of the stack.
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

    case 'S'://Replace the stack's top element with its sine.
      push(sin(pop()));
      break;

    case 'C'://Replace the stack's top element with its cosine.
      push(cos(pop()));
      break;

    case 'T'://Replace the stack's top element with its tangent.
      push(tan(pop()));
      break;

    case 'E'://Replace the stack's top element with its exponentiation.
      push(exp(pop()));
      break;

    case 'L'://Replace the stack's top element with its natural logarithm.
      push(log(pop()));
      break;

    case 'R'://Replace the stack's top element with its root.
      push(sqrt(pop()));
      break;

    case 'P'://Replace the stack's top two elements with the bottom taken to the top power.
      op2=pop();
      push(pow(pop(),op2));
      break;

    case '?': //Peek at the stack's top element.
      printf("\t%.8g\n",peek());
      break;

    case '$'://Swap the stack's top-two elements.
      op2=pop();
      op1=pop();
      push(op2);
      push(op1);
      break;

    case'=': //Pop the stack's top element and display it.
      printf("\t%.8g\n",pop());
      break;

    case '<': //Clear the stack.
      clear();
      break;

    case '\n': //Return gets used by standard input to feed getchar(). Do nothing.
      break;

    default:
      printf("error: unknown operator: %s\n",s);
      break;

    }

  }

  return(0);
}
