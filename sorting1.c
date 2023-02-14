 //Wap to short n data items in DMA
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j;
	printf("Enter No. of data\n");
	scanf("%d",&n);
	int* ptr;
	ptr=(int*)malloc(n*sizeof(int));
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",ptr[i]);
	}
	printf("\nSorted elements in ascending order are\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ptr[i]>ptr[j])
			{
			int temp;
			temp=ptr[i];
			ptr[i]=ptr[j];
			ptr[j]=temp;
		}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",ptr[i]);
	}
	printf("\nSorted elements in decending order are\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ptr[i]<ptr[j])
			{
			int temp;
			temp=ptr[i];
			ptr[i]=ptr[j];
			ptr[j]=temp;
		}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",ptr[i]);
	}
}
