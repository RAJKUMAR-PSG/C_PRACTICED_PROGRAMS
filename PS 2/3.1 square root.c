#include<stdio.h>
int main()
{
int n,t;
printf("square root of odd positive integers is :\n");
for(int i=1;i<=25;i++)
{
if(i%2 != 0)
{
t = i*i;
printf("the square root of %d is : %d\n" ,i,t);
}
}
}
