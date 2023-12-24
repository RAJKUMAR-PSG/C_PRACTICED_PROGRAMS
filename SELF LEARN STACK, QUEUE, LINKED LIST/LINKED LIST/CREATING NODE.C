#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
    int data;
    struct node *link;
    };

    struct node *head = (struct node*)malloc(sizeof(struct node));
    head -> data = 87;
    printf("%d",head -> data);
}
