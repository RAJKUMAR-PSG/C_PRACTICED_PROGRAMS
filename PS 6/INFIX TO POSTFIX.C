#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
char symbol,stack[max],infix[max],postfix[max];
int top=-1;

void push(char c)
{
        if(top==max-1)
        {
          printf("stak overflow");
          return;
        }
        top++;
        stack[top]=c;
}
char pop()
{
    char c;
    if(top==-1)
    {
        printf("stack underflow");
        exit(1);
    }
    else
    {
        c=stack[top];
        top--;
        return c;
    }
}
int isempty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}
int precedence(char symbol)
{
    switch(symbol)
    {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return 0;

    }
}
void print()
{
    int i=0;
    printf("the postfix expression was");
    while(postfix[i])
        printf("%c",postfix[i++]);
        i++;
}
int space(char c)
{
    if(c == ' ' || c == '\t')
        return 0;
    else
        return 1;
}
void in_to_post()
{
    int i,j=0;
    char symbol,next;
    for(i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];
        if(space(symbol))
        {
        switch(symbol)
        {
            case '(':
                   push(symbol);
                   break;
            case ')':
            while((next=pop()) != '(')
                postfix[j++]=next;
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                while(!isempty() && precedence(stack[top]) >= precedence(symbol))
                    postfix[j++]=pop();
                    push(symbol);
                    break;
            default:
                postfix[j++]=symbol;
        }
    }
}
while(!isempty())
    postfix[j++]=pop();
    postfix[j]='\0';
}


int main()
{
    printf("enter the infix expression");
    gets(infix);
    in_to_post();
    print();
}
