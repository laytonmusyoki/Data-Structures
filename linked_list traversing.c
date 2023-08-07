#include<stdio.h>
#include<stdlib.h>

node_count(struct node *head);

struct node{
int data;
struct node *link;
};

int main()
{
    struct node *head=NULL;
    head=(struct node *)(malloc(sizeof(struct node)));
    head->data=30;
    head->link=NULL;
    struct node *current=(struct node *)(malloc(sizeof(struct node)));
    current->data=50;
    current->link=NULL;
    head->link=current;
    
    printf("%d,%d",head->data, current->data);
    node_count(head);
}

node_count(struct node *head){
    int count=0;
    struct node *ptr=NULL;
    if(head==NULL){
    printf("linked list is empty");
    }
    else{
    ptr=head;
    while(ptr!=NULL){
    count++;
    ptr=ptr->link;
    }
    printf("\nThe number of nodes is: ");
    printf("%d",count);
    }
}