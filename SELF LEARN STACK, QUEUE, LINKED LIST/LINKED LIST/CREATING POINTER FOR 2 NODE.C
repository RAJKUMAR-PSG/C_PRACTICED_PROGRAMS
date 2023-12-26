#include<stdio.h>
#include<stdlib.h>

    struct node{
    int data;
    struct node *link;
    };
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head -> data=45;
    printf("%d",head -> data);
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data=90;
    ptr -> link = NULL;
    head -> link = ptr;
     printf(" %d",ptr -> data);
}
