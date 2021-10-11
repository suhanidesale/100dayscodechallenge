/*Program for PostFix Evaluation */

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#define size 100

char stack[size];
int top = -1;

void push(char);
char pop();

int ischaracteradigit(char a)
{
  if (a >= '0' && a <= '9')
    return 1; // true when it is a digit
  else
    return 0; // true when it is not a digit
}

void evaluateexp(int p1, int p2, char opr )
{
  int val;
  //printf("\n eval:  op1=%d  & op2=%d , opr=%c",p1,p2,opr);
  if (opr == '+')
    val = p1 + p2;
  if (opr == '-')
    val = p1 - p2;
  if (opr == '*')
    val = p1 * p2;
  if (opr == '/')
    val = p1 / p2;
  if (opr == '%')
    val = p1 % p2;
}

void push(char x)
{
  if (top == size - 1)
  {
    printf("Stack is FULL");
  }
  else
  {
    top++;
    stack[top] = x;
    printf("\n %d inserted in stack", x);
  }
}

char pop()
{
  char x;

  x = stack[top--];
  printf("\n %d element popped out of the stack", x);
  return x;
}

void main()
{
  int op1, op2;
  char x[100];
  int val , i;

  //clrscr();

  printf("\n----PostFix Evaluation---");
  printf("\n Enter the expression :");
   for (i = 0; i <= 100 - 1; i++) {
        scanf("%c", &x[i]);

        if (x[i] == ')') /* is there any way to eliminate this if */
        {
            break;
        } /* and break statement */
    }


  //(x=getchar())!='\n'
  for(i = 0; x[i] != ')' ; i++)

  //while ((x = getchar()) != '\n')
  {
    if (ischaracteradigit(x[]))
    {
      push(x - '0');
    }
    else
    {
      if (top == -1)
      {
        printf("\n Stack is EMPTY");
      }
      else
      {
        op2 = pop();
        op1 = pop();
        //printf("\n popped:  op1=%d  & op2=%d , opr=%c",op1,op2,x);

        val = evaluateexp(op1, op2, x);
        printf("\n evaluation ans= %d", val);
        push(val);
      }
    }
  }

  val = pop();
  printf("\n Value of Expression= %d", val);

  //getch();
}