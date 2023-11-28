#include<stdio.h>
#define max 5
int stack[max];
int first=-1;

void push(int val)
{
    first = first+1;
    for(int i=first;i>0;i--)
        stack[i] = stack[i-1];
        stack[0] = val;
}

void print()
{
    printf("the elements are :");
    for(int i=first;i>=0;i--)
    printf("%d \n",stack[i]);
}

int main()
{
push(30);
push(90);
push(100);
print();
}
