#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1,stack[size];
int maxele=0;

void push();
void pop();
void getmax();

int main()
{
     int choice;

 while(1)
 {
  printf("\nOperations performed by Stack");
  printf("\n1.Push the element\n2.Pop the element\n3.Get max \n4.End");
  printf("\n\nEnter the choice:");
  scanf("%d",&choice);

  switch(choice)
  {
   case 1: push();
     break;
   case 2: pop();
     break;
   case 3: getmax();
     break;
   case 4: exit(0);

   default: printf("\nInvalid choice!!");
  }
 }
}

void push()
{ int x;

    if(top==size-1)
    {
        printf("Overflow!!!!");
    }
    else if(top==-1)
        { printf("\n Enter element to be inserted:");
            scanf("%d",&x);
            maxele=x;
            top=top+1;
            stack[top]=x;
        }
    else
    {
          printf("\n Enter element to be inserted:");
            scanf("%d",&x);

          if(x>=maxele)
          {

              top=top+1;
              stack[top]=(2 * x - maxele);
              maxele=x;
              printf("\n stack top is: %d",stack[top]);
          }

         else
        {
            top=top+1;
            stack[top]=x;
        }
}
}

void getmax()
{
    printf("\n The max element is: %d",maxele);
}

void pop()
{ int x;
    if(top==-1)
    {
        printf("\n Underflow!!!");
    }
    else

    { x=stack[top];
        printf(" \n top most element removed is:");
        if(x>maxele)
        {
        printf("%d",maxele);
        maxele=(2*maxele-x);
        top=top-1;
        }
        else
        {
        printf("%d",x);
        top=top-1;
        }

    }
}
