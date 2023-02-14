//Wap to allocate memory for 5 data items using malloc() and store data.After storing data re-allocate memory for storing 5 additional data items and display all data.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,arr[5];
	int* ptr;
	ptr=(int*)malloc(5*sizeof(int));
	printf("Enter 5 numbers\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	ptr=(int*)realloc(ptr,5);
	printf("Elemets of array are\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	
}
