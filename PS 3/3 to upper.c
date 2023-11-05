#include<stdio.h>
int main()
{
char a[1000],n;
int i=0;
printf("enter the characters : \n");
scanf("%s",&a);

while(a[i] != '\0')
{
printf("%c",a[i]-32);
i++;
}
}
