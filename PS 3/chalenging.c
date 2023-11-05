#include<stdio.h>
int main()
{
char a[1000];
int n,i;

printf("enter the characters :\n");
scanf("%s",&a);

printf("enter the numbers that u want to cut of the string into :\n");
scanf("%d",&n);

for(i=0;a[i]!='\0';i++)
{
if(i%n != 0)
printf("%c",a[i]);
else
printf("\n %c",a[i]);
}
}
