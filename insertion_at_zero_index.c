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
	printf("\nEnter element to insert:\n");
	scanf("%d",&element);
	for(int i=size;i>=0;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=element;
	size++;
	printf("New array after insertion:\n");
	for(int i=0;i<size;i++){
		printf("[%d]",arr[i]);
	}
}