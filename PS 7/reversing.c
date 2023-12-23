#include <stdio.h>
# define max 100
void enqueue();
int dequeue();
void stack();
int pop();
void show();
int queue[max],ele=0,rev=0,e=0;
int Rear = - 1,n=0,top=-1;
int Front = - 1,i=0,elem=0;
int m=0,s=0;
int popu=0,q=0;
int stacki[max];
int main()
{
    printf("ener the no elements to push");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the element to enqueue");
        scanf("%d",&q);
        enqueue(q);

    }
    show();

    printf("enter the elements from which u want to reverse");
    scanf("%d",&rev);

    for(i=0;i<rev;i++)
    {
        elem=dequeue();
        printf("the push elem is %d  \n",elem);
        push(elem);
    }
    for(i=0;i<rev;i++)
    {
        popu=pop();
        printf("the pop element from stack is %d  \n",popu);
        enqueue(popu);
    }
    show();
    s=n-rev;
    for(i=0;i<s;i++)
    {
       m=dequeue();
       enqueue(m);
    }
    show();
}


void enqueue(int qr)
{
    if(Rear == max - 1)
       printf("Overflow \n");
    else
    {
        if (Front == - 1)
        Front = 0;
        Rear = Rear + 1;
        queue[Rear] = qr;
    }
}

int dequeue()
{
    if (Front == - 1 || Front > Rear)
    {
        printf("Underflow \n");
        return ;
    }
    else
    {
        e=queue[Front];
        Front = Front + 1;
        return e;
    }
}


void show()
{

    if (Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

void push(int val)
    {
    if(top == max-1)
    {
        printf("stack is full");
        return;
    }
        top = top+1;
        stacki[top]=val;
    }
int pop()
{
    int val;
    if(top == -1)
        printf("stack underflow");
    else
        val=stacki[top];
        top--;
        return val;
}
