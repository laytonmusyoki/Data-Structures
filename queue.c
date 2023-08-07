#include<stdio.h>
# define N 10
int Rear=-1;
int front=-1;
int Queue[N];

queue(){
	int item;
	printf("Enter item you you want to add: ");
	scanf("%d",&item);
	if(Rear==N-1){
		printf("Queue is full\n");
	}
	else{
		Rear=front=0;
		Queue[Rear]=item;
	}
}

display(){
	for(int i=0;i<=Rear;i++){
		printf("[%d]\n",Queue[i]);
	}
}

int main(){
	int option;
	printf("Options\n 1:Queue\n 2:De_Queue\n 3:Display\n");
	while(1){
	printf("Enter option: ");
	scanf("%d",&option);
	switch(option){
		case 1:
		queue();
		case 3:
		display();
		break;
		default:
		printf("You have entered invalid option");
		break;
	}
}
}