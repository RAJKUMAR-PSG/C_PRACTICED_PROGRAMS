#include<stdio.h>
int main()
{
char a[1000],b[1000];
int i = 0;
printf("enter the string that u want to copy : \n");
scanf("%s",a);

while(a[i] != '\0')
{
b[i] = a[i];
printf("%c",b[i]);
i++;
}
}

