#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};

main(){
	struct node *head=NULL;
	head=(struct node *)(malloc(sizeof(struct node)));
	head->data=30;
	head->link=NULL;
	
	struct node *current=(struct node *)(malloc(sizeof(struct node)));
	current->data=70;
	
	
	struct node *last=(struct node *)(malloc(sizeof(struct node)));
	last->data=90;
	last->link=NULL;
	
	current->link=last;
	head->link=current;
	
	printf("%d,%d,%d",head->data,current->data,last->data);
}