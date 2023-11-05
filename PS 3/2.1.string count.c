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

printf("the count of a string is : %d",count);
}
