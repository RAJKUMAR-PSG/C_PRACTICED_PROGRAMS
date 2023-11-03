#include<stdio.h>
int main()
{
int calls;
printf("enter the calls you made a month = ");
scanf("%d",&calls);
if(calls<100)
printf("your bill amount is rs.50");
else if(calls<=200)
printf("your bill amount is %d",calls*1);
else if(calls<300)
printf("your bill amount is %d",calls*2);
else if(calls>=300)
printf("your bill amount is %d",calls*3);
}
