#include<stdio.h>
int main()
{
int size,i,j,a[1000],b;
printf("enter the size of an element: \n");
scanf("%d",&size);

printf("enter the elements: \n");
for(i=1;i<=size;i++)
{
scanf("%d",&a[i]);
}

for(i=1;i<=size;i++)
{
    for(j=i+1;j<size;j++)
    {

             if(a[i]>a[j])
             {
              b=a[i];
              a[i]=a[j];
              a[j]=b;
             }
    }
}
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < size; i++)
        printf("%d\n", a[i]);
}
