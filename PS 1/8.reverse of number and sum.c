#include<stdio.h>
int main()
{
int num,s = 0,n,count = 0,g,t=0;
printf("enter a number = ");
scanf("%d",&num);

while(num != 0)
{
    n = num%10;
    s = s*10 + n;
    num = num/10;
    count = count + 1;

}
printf("the reverse of a number is %d",s);
printf("\nthe value of count is : %d",count);

for(int i = 1;i<=count;i++)
{
    g = s % 10;
    s = s/10;
    s=s+g;
}
printf("\n the sum is : %d",s);

for(i=1;)
}


