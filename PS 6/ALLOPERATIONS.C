#include <stdio.h>
#include <stdlib.h>
#define max 5
int stack[max],top=-1;
void push(int val)
    {
    if(top == max-1)
    {
        printf("stack is full");
        return;
    }
        top = top+1;
        stack[top]=val;
    }
int pop()
{
    int val;
    if(top == -1)
        printf("stack underflow");
    else
        val=stack[top];
        top--;
        return val;
}
int peek()
{
    int peek;
    if(top == -1)
        printf("there is no element in found");
    else
        peek = stack[top];
        return peek;
}
int main()
{
int choice=0,val,val1,val2;
while(1)
{
printf("here are the choices");
printf("1.push the element \n");
printf("2.pop the element \n");
printf("3.print the top element \n");
printf("4.print all the elements \n");
printf("5.quit");
printf("please enter your choice \n");
scanf("%d",choice);
}
switch(choice)
{
case 1:
    printf("enter the element to push");
    scanf("%d",&val);
    push(val);
    break;
case 2:
    val1 = pop();
    printf("element poped out %d",val1);
    break;
case 3:
    val2 = peek();
    printf("the topmost element in the stack was",val2);
    break;
case 4:
    printf("the elements in the stack are:");
    for(int i=0;stack[i]<top;i++)
    {
       printf("%d",stack[i]);
    }
}
}
