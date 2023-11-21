#include<stdio.h>
int top = -1;
int stack[30];

void push();
int pop();
int max();

int main()
{
    while(1)
    {
        printf("1.push");
        printf("1.pop");
        printf("1.max");
        printf("enter ur choice:");
        scanf("d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the element to be pushed");
            scanf("%d",ele)
            check=ele;
        if(top == -1)
            push(ele);
            x=ele;
        else if(x<check)


        case 2:
            pop();
            printf("element poppped");
        case 3:
            printf("the maximum element in the stack was :%d",maxele)

    }
}
