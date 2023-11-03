#include<stdio.h>
int main()
{
int n,x,sum = 0;
printf("enter the value of x : ");
scanf("%d",&x);
printf("enter the value of n : ");
scanf("%d",&n);
int t = x;
for(int i = 0;i < n; i++)
{
sum = sum + t;
t = t * 10 +x;
}
printf("the sum is : %d",sum);
}
