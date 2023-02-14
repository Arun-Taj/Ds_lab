#include<stdio.h>
#include<stdlib.h>
void store(int arr[],int pos, int element)
{
	if(pos<0||pos>4)
	{
		printf("Index out of range\n");
	}
	else
	{
		arr[pos]=element;
		printf("Items stored at %d is %d\n",pos,element);
	}
}
void display(int arr[])
{
	printf("Elements are\n");
	int i;
	for( i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void retrive(int arr[],int pos)
{
	if(pos<0||pos>4)
	{
		printf("Out of bound\n");
		exit(0);
	}
	printf("\nElements at pos %d is %d",pos,arr[pos]);
}
int main()
{
	int arr[5]={10,20,30,40,50};
	int pos,elements;
	display(arr);
	printf("\nEnter the Position of elements\n");
	scanf("%d",&pos);
	printf("\nEnter new element for replacement\n");
	scanf("%d",&elements);
	store(arr,pos,elements);
	retrive(arr,pos);
	display(arr);
	
}
