#include<stdio.h>
#define max 6
int stack[max];
int first = -1;
void push(int p)
{
first=first+1;
  for(int i=first;i>0;i--)
  stack[i] = stack[i-1];
  stack[0] = p;
}

int pop()
{
    int po;
    po=stack[0];
    for(int i=1;i<=first;i++)
        stack[i-1] = stack[i];
    return po;
}

int print()
{
    printf("the remaining elements are:");
    for(int i=0;i<first;i++)
    {
        printf("%d \n",stack[i]);
    }
}

int main()
{
int val=0;
push(30);
push(90);
push(100);
val=pop();
print();
}

