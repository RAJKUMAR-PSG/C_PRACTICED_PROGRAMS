#include<stdio.h>
int main()
{
printf("find the number in between 7 and 100\n ");
int n;
for(n=7;n<100;n++)
{
if(n%4==0 && n%5==4 && n%6==4)
printf("the number is  = %d",n);
}
}
