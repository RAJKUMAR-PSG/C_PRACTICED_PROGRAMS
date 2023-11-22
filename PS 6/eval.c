#include<stdio.h>
#include<string.h>
int stack[30];
int top=-1;
char expr[50];
void push(int num){
stack[++top]=num;
}
int pop(){
return stack[top--];}
int main(){
printf("enter the expression");
gets(expr);
int i=0;
int num;
int n1,n2,n3;
while(expr[i]!='\0')
    {
        if(isdigit(expr[i])){
                num=expr[i]-48;
            push(num);

        }
        else{
            n1=pop();
            n2=pop();

            switch(expr[i])
            {
            case '+':
                n3=n1+n2;
                break;
            case '-':
                n3=n2-n1;
                break;
            case '*':
                n3=n1*n2;
                break;
            case '/':
                n3=n2/n1;
                break;
            }
            push(n3);
            }
            i++;


        }
        printf("%d",pop());

    }
