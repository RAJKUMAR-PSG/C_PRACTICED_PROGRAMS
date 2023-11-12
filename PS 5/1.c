#include<stdio.h>
int main()
{
 int row,column,count,i,j,a[100][100];
printf("enter the number of rows : \n");
scanf("%d",&row);
printf("enter the number of column : \n");
scanf("%d",&column);
printf("enter the elements : \n");
for(i=1;i<=row;i++)
{
 for(j=1;j<=column;j++)
 {
     scanf("%d",&a[i][j]);
 }
}
for(i=1;i<=row;i++)
{
 for(j=1;j<=column;j++)
 {
     printf("%d",a[i][j]);
     if(a[i][j] == 0)
        count++;
 }
 printf("\n");
}
   if (count > ((row * column) / 2))
    {
        printf("The given matrix is sparse matrix :\n");
    }
    else
        printf("The given matrix is not a sparse matrix ::\n");
    printf("There are %d number of zeros", count);
}


