#include<stdio.h>
#include<limits.h>
int main()
{
int a[100],size,i,max1 = 1,max2 = 1;

printf("enter the size of an element:\n");
scanf("%d",&size);

printf("enter the array elements : \n");
for(i=1;i<=size;i++)
{
    scanf("%d",&a[i]);
}
for(i=1;i<=size;i++)
{
    if(a[i]>max1)
    {
        max2 = max1;
        max1=a[i];
    }
    else if(a[i]>max1 && a[i]<max2)
    {
        max2=a[i];
    }
}
printf("the first largest value is %d \n",max1);
printf("the second largest value is %d",max2);
}

