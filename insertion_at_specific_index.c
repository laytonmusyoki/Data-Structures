#include<stdio.h>
main()
{
	int ar[40];
	int size;
	int position;
	int element;
	printf("Enter number of elements:\n");
	scanf("%d",&size);
	printf("Enter elements one by one:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&ar[i]);
	}
	printf("You entered this:\n");
	for(int j=0;j<size;j++){
		printf("[%d]",ar[j]);
	}
	printf("\nEnter position:\n");
	scanf("%d",&position);
	printf("Enter element to insert:\n");
	scanf("%d",&element);
	
	if(position<1 || position>size+1){
		printf("invalid position please try again:");
	}
	else{
	for(int i=size;i>=position;i--){
		ar[i]=ar[i-1];
	}
	ar[position-1]=element;
	size++;
	printf("New array:\n");
	for(int j=0;j<size;j++){
		printf("[%d]",ar[j]);
	}
}
	
}