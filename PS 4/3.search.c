#include<stdio.h>
int main()
{
    int i,n,a[100],s;
    printf("enter how many numbers : \n");
    scanf("%d",&n);

    printf("enter the elements :\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }

    printf("enter the number u want to search : ");
    scanf("%d",&s);
    printf("\nThe number is %d",s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            printf("\nFound in the Position %d" ,i+1);
        }
    }
}
