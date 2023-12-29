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
    struct node *current = (struct node*)malloc(sizeof(struct node));
    current -> data=90;
    current -> link = NULL;
    head -> link = current;
     printf(" %d",current -> data);

     current = (struct node*)malloc(sizeof(struct node));
     current -> data=135;
     current -> link=NULL;
     printf(" %d",current -> data);
     head->link->link=current;
}
