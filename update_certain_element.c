#include<stdio.h>
main()
{
	int arr[50];
	int size;
	int position;
	int element;
	printf("Enter number of elements:\n");
	scanf("%d",&size);
	printf("Enter elements one by one:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Array entered:\n");
	for(int i=0;i<size;i++){
		printf("[%d]",arr[i]);
	}
	printf("\nEnter position to update:\n");
	scanf("%d",&position);
	printf("Enter the new element:\n");
	scanf("%d",&element);
	arr[position-1]=element;
	printf("Updated array:\n");
	for(int i=0;i<size;i++){
		printf("[%d]",arr[i]);
	}
	
}