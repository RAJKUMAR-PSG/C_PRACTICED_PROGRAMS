#include<stdio.h>
int main()
{
char a[100],b[100],i,j,count=0;
printf("enter the string : ");
gets(a);
printf("enter the 2nd string : ");
gets(b);
if(strlen(a)==strlen(b))
{
for(i=0;i<strlen(a);i++)
{
    for(j=0;j<strlen(b);j++)
    {
        if(a[i]==b[j])
        {
            count++;
            break;
        }
    }
}
}
if(count==strlen(a))
    printf("it is an anagram");
else
    printf("it is not an anagram");

}
