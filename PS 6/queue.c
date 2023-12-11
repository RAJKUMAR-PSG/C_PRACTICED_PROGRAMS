#include <stdio.h>
int rear=-1;
int front=-1;


void enqueue(int queue[],int n,int num){
 if(rear==n-1)
 {
     printf("queue is full");
 }
 else{
        queue[++rear]=num;

 }

}

int dequeu(int queue[],int rear){
if(front>=rear){
        printf("queue is empty \n");


}
else{
    return  queue[++front];
}
}

int main(){
printf("enter the size of queue");
int n;
scanf("%d",&n);
int queue[n];
int i,num;
for(i=0;i<=n;i++)
    {
        printf("enter the value");
        scanf("%d",&num);
        enqueue(queue,n,num);
    }
for(i=0;i<=n;i++)
{
printf("%d\n",dequeu(queue,rear));
}
}

