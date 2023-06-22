#include<stdio.h>
main()
{
int arr[50];
int size;
int position ;


printf("enter number of elements:\n");
scanf("%d",&size);
printf("Enter the elements one by one:\n");
for(int i=0;i< size;i++)
   {
   scanf("%d",&arr[i]);
}
printf("You have entered :\n");
        for (int i = 0; i < size; i++) {
            printf("%d\n", arr[i]);
        }

printf("Enter position of the element you want to delete \n");
scanf("%d",&position);

for(int i=position-1;i<size;i++)
{
arr[i]=arr[i+1];
}

size--;
printf("Array after deleting the element:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }


return 0;
}