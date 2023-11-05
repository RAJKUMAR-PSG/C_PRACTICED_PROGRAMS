#include<stdio.h>
#include<string.h>
int main()
{
int count = 0,c = 0;
char a[1000];

printf("enter the word :\n");
scanf("%s",&a);


while(a[c] !='\0')
{
    if(a[c] == 'a' || a[c] == 'e' || a[c] == 'i' || a[c] == 'o' || a[c] == 'u')
        count = count + 1;
c++;
}
printf("the number of vowels present in the word u given is : %d",count);
}
