#include<stdio.h>
#define max 30

void push();
int pop();
void show();

int arr[10]={6,3,4,1,2};
int i=0,stack[max];
int top = -1,ele = 0,pele = 0;
int n=0,k=0;

int main()
{
    printf("enter the number of elements u want to push");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        push();
    }
    show();
    for(int i=0;i<5;i++)
    {
         int count=0;
         int found=0;
         for(int j=k;j<=top;j++)
         {
             if(stack[i]==arr[j])
             {
                 found=1;
                 count++;
                 k=j+1;
                 break;
             }
             else
              count++;

         }
         if(found==1)
         printf("%d ",count);
         else
         printf("0 ");

    }
}

void push()
{
    if(top == max-1)
        printf("stack overflow");
    else
    {
        printf("enter the element");
        scanf("%d",&ele);
        top++;
        stack[top] = ele;
    }
}

int pop()
{
    if(top == -1)
        printf("stack underflow");
    else
    {
        pele = stack[top];
        printf("the poped element was %d",&pele);
        top--;
    }
}

void show()
{
   printf("the elements are");
   for(i=0;i<=top;i++)
   {
      printf("%d",stack[i]);
   }
}
