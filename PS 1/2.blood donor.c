#include<stdio.h>
int main()
{
int age,wei;
printf("enter the age = ");
scanf("%d",&age);
printf("enter the weight = ");
scanf("%d",&wei);
if(age<55 && age>18 && wei>45)
printf("he is eligible");
else
printf("he is not eligible");
}
