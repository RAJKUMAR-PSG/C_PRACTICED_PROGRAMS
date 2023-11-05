#include<stdio.h>
int main()
{
char c[1000] ;
int  a=0 , count = 0;
printf("plaese enter a string : \n");
scanf("%s",&c);

while(c[a] != '\0')
{
count++;
a++;
}
for(int i=count-1;i>=0;i--)
{
printf("%c",c[i]);
}
}
