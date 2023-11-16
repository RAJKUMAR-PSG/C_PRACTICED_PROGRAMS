#include<stdio.h>
int main()
{
    char a[20];
    int i,j,count=0;;
    printf("enter the string");
    scanf("%s",&a);
     for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    for(i=0;i<count;i++)
    {
        if(a[i]=='b')
        {
            continue;
           }
         if( a[i]=='a' && a[i+1]=='c')
        {
            i+=1;
        continue;

        }
        else{
            printf("%c",a[i]);
        }
    }

    return 0;
}
