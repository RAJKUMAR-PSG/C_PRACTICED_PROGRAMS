#include<stdio.h>
int main()
{
    int m=0,n=0,i,j,e1=0,e2=0,e3=0,e4=0,sum;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }

        e1 = arr[m-m][n-n];
        e2 = arr[m-m][n-1];
        e3 = arr[m-1][n-n];
        e4 = arr[m-1][n-1];
        sum = e1+e2+e3+e4;
        printf("the corner elements are %d %d %d %d",e1,e2,e3,e4);
        printf("the sum of elements are %d",sum);

    }

