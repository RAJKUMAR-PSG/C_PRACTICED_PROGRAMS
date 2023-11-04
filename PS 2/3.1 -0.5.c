#include<stdio.h>
int main()
{
float a;

printf("enter the number :\n");
scanf("%f",&a);

while(a)
{
a=a-0.5;
printf("the value is :%.1f \n",a);
}
}
