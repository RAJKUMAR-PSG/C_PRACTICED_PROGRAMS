#include<stdio.h>
int stack[100];
int top=-1;

void push(int num)
{
    stack[++top]=num;
}
int pop()
{
    return stack[top--];
}
int peek()
{
return stack[top];
}


int main()
{
    printf("enter the number of element:");
    int i,n,num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);

        if(i==0)
        {
            push(num);
        }
        else{
            int temp=peek();
        if(num<temp)
        {
            pop();
            push(num);
            push(temp);

        }
        else{
            push(num);
        }
        }
    }
    printf("%d",pop());

}
