/* ex4.06.c
   This file contains the |main| function for the reverse Polish calculator enhanced with variables as directed by Exercise 4.6.
*/

#include<stdio.h>
#include<stdlib.h> //for |atof()|
#include<math.h>   //for trigonometric and exponential functions.

#define MAXOP 100  //maximum size of operand or operator
#define NUMBER '0' //signal returned to indicate a number was found in the input.
#define VARIABLE '1' //signal returned to indicate that a variable was found in the input.
#define FIRST_VARIABLE 96
#define TRUE 1
#define FALSE 0

int    getop(char[]);
void   push(double);
double pop(void);
double peek(void);
void   clear(void);
double vpeek(int);
void   vpoke(int,double);

int main(void){

  int type, assigning;
  double op1, op2; //Used to store operands popped off of the stack.
  char s[MAXOP]; //Used to store operator and operand.
  assigning=FALSE; //Gets set to true after encountering the assignment operator. Gets reset to false on a new line.
  while ((type=getop(s)) != EOF) {

    //If we are processing assignment, pop the stack to fill a given variable. 

    if(assigning){

      switch (type){

      case VARIABLE:
	op1=pop();
	vpoke(s[0],op1);
	break;

      case '\n':
	assigning=FALSE;
	break;

      default:
	printf("error: invalid target for assignment.\n");
	break;

      }
      continue; //With the next round of the outermost while loop.


    }
    switch (type) {
      
    case NUMBER: //We have found a number. Push it onto the stack.
      push(atof(s));
      break;

    case VARIABLE: //We have found a reference to a variable. Push its value onto the stack.
      push(vpeek(s[0]));
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
      printf("\t%.8g\n",op1=peek());
      vpoke(FIRST_VARIABLE,op1);
      break;

    case '$'://Swap the stack's top-two elements.
      op2=pop();
      op1=pop();
      push(op2);
      push(op1);
      break;

    case'=': //Pop the stack's top element and display it.
      printf("\t%.8g\n",op1=pop());
      vpoke(FIRST_VARIABLE,op1);
      break;

    case '<': //Clear the stack.
      clear();
      break;

    case '>'://Assignment operator
      assigning=TRUE;
      break;

    case '\n': //Return gets used by standard input to feed getchar(). Set |assigning| to false.
      assigning=FALSE;
      break;

    default:
      printf("error: unknown operator: %s\n",s);
      break;

    }

  }

  return(0);
}
