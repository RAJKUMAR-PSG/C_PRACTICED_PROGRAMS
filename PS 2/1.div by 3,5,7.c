#include<stdio.h>
int main()
{
int a;
 printf("enter a number above 0:");
    scanf("%d",&a);
   while(a)
    {
    if((a%3 == 0) && (a%5 == 0) && (a%7 == 0))
           break;
    else
        {
        printf("enter a number :");
        scanf("%d",&a);
        }
}
}
