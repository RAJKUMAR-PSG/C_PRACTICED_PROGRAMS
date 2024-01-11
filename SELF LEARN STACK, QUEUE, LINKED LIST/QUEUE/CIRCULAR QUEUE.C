#include<stdio.h>
#define max 20
int stack[max];
int choice,ele;
int front=-1,rear=-1;


void push();
int pop();

int main()
{
   while(1)
   {
   printf("1.push Operation\n");
   printf("2.pop Operation\n");
   printf("enter your choice");
   scanf("%d",&choice);
   switch(choice)
   {
   case 1:
    push();
    break;
   case 2:
    pop();
    break;
   }
   }
}
void push()
{
    printf("enter the element");
    scanf("%d",&ele);
    if(front==rear+1 || (front==0 && rear == max-1))
        printf("stack is full");
    else if(front == rear == -1)
    {
        front=rear=0;
        rear+=1;
        stack[rear] = ele;
    }
    else if(rear==max-1)
    {
        rear=0;
        stack[rear]=ele;
    }
    else
    {
        rear=rear+1;
        stack[rear]=ele;
    }
}

int pop()
{
    if(front == -1 && rear == -1)
    {
        printf("stack underflow");
    }
    else if(front == rear)
    {
        ele=stack[front];
        front = rear = -1;
        printf("the poped element was %d",ele);
    }
    else if(front == max-1)
    {
        ele=stack[front];
        front=0;
        printf("the poped element was %d",ele);
    }
    else
    {
        ele=stack[front];
        printf("the poped element was %d",ele);
        front+=1;
    }
}



