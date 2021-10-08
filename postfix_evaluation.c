#include <stdio.h>
#include <string.h>

int stack [100];
int size;
int top = -1;
char *arr;

int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push()
{
    int x;
    if (top = 9)
    {
        printf("Stack is Full\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top = -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        stack[top--];
    }
}

int evaluation(char s)
{
    int i, a, b,x;
    float c;
    while (s!= '\0')
    {
        if (s[i] >= '0' && s[i] <= '9') //!isOperator(infix[i])
        {
            x = s[i] - 48;
            push(x);
        }
        else if (!isOperator(s[i]))
        {
            a = pop();
            b = pop();
            switch(input[i])
            {
                case 1: '+';
                    c = b+a;
                    s1.push(c);
                    break;
                case 2: '-';
                    c = b-a;
                    s1.push(c);
                    break;
                case 3: '*';
                    c = b*a;
                    s1.push(c); 
                    break;
                case 4: '/';
                    c = b/a;
                    s1.push(c);
                    break;

            }
        }
        i++;
    }
}

int main()
{
    int stack [100];
    char s[100];
    int i = 0;
    printf("Enter a Postfix Expression: ");
    for (i = 0; i <= 99 ; i++) {
        scanf("%c", &s[i]);
    }

    scanf("%s", s);
    printf("Ans is: %s",evaluation(s));
    return 0;
}