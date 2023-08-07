#include<stdio.h>
#include<stdlib.h>

int delete_node(struct node *head);

struct node{
	int data;
	struct node *link;
};

main(){
	struct node *head=NULL;
	head=(struct node *)(malloc(sizeof(struct node)));
	head->data=20;
	
	struct node *first=(struct node *)(malloc(sizeof(struct node)));
	first->data=30;
	
	struct node *second=(struct node *)(malloc(sizeof(struct node)));
	second->data=40;
	second->link=NULL;
	first->link=second;
	head->link=first;
	
	delete_node(head);
	
	
	
}

int delete_node(struct node *head){
	struct node *temp=NULL;
	temp=head;
	head=head->link;
	free(temp);;    
	temp=NULL;
	struct node *ptr=NULL;
	if(head==NULL){
		printf("Linked list is empty");
	}
	else{
		int count=0;
		ptr=head;
		printf("Remaining linked list data after deletion");
		while(ptr!=NULL){ 
			printf(" [%d]",ptr->data);
		 	count++;
			ptr=ptr->link;
		}
		printf("\nNumber of nodes after deletion: ");
		printf("%d",count);
	}
}
	

