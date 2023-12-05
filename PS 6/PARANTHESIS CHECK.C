#include<stdio.h>
#include<string.h>
char stack[30];
char expr[30],symbol;
int top=-1,i;
void push(char c)
{
stack[++top]=c;
}
int pop()
{
return stack[top--];
}
int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
int main()
{
    printf("enter the expr");
    gets(expr);
    for(i=0;i<strlen(expr);i++)
    {
        symbol = expr[i];


        if(symbol == '(' || symbol == ')' )
        {
           if(symbol=='(')
              push(symbol);
           else if(stack[top] == '(')
              if(symbol==')')
                pop();
        }
         else if(symbol == '[' || symbol == ']' )
         {
           if(symbol=='[')
              push(symbol);
           else if(stack[top] == '[')
              if(symbol==']')
                pop();
         }

    }
    if(isempty())
    printf("it is valid");
    else
    printf("it is not valid");

}
