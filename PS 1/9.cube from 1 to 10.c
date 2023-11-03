#include<stdio.h>
int main()
{
int n,num;
printf("ENTER THE NUMBER FROM 1 TO 10 = ");
scanf("%d",&n);

if(n<=10)
{
num = n*n*n;
printf("the cube of %d is = %d",n,num);
}
else
{
printf("please enter the value from 1 to 10");
}
}
