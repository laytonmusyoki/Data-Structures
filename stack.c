#include<stdio.h>
#define N 10
int top=-1;
int stack[N];

push(){
	int item;
	printf("Enter item you you want to push: ");
	scanf("%d",&item);
	if(top==N-1){
		printf("Stack is full");
	}
	else{
		top=top+1;
		stack[top]=item;
	}
}

pop(){
	int item;
	if(top==-1){
		printf("Stack is empty\n");
	}
	else{
		top=top-1;
		item=stack[top];
		printf("Item poped is %d\n",item);
	}
}
display(){
	for(int i=0;i<=top;i++){
		printf("[%d]\n",stack[i]);
	}
}

int main(){
	int option;
	printf("Options\n 1:Push\n 2:Pop\n 3:Display\n");
	while(1){
	printf("Enter option: ");
	scanf("%d",&option);
	switch(option){
		case 1:
		push();
		break;
		case 2:
		pop();
		break;
		case 3:
		display();
		break;
		default:
		printf("You have entered invalid option");
		break;
	}
}
}