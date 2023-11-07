#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[100];
    int i=0,countspace=0;;
    printf("Enter any String\n");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            countspace++;
            i++;

        }
        else if(countspace>=1)
        {
            printf(" %c",str[i]);
            countspace=0;
        }
        else
        {
            printf("%c",str[i]);
        }
        i++;
    }
    return 0;
}
