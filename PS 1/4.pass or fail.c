#include<stdio.h>
int main()
{
int c1,c2,c;
printf("enter the marks of component 1 :\n");
scanf("%d",&c1);
printf("enter the marks of component 2 :\n");
scanf("%d",&c2);
if(c1>20 && c2>20)
{
c = c1+c2;
if(c>45)
{
printf("he got the pass mark : %d",c);
}
else
printf("he got the fail mark : %d",c);
}
}
