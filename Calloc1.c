//Wap to allocate memory for n data using calloc() function and display. After allocating find the maximum and minimum number and display it. Release memory after printing sum.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	int* ptr;
	printf("Enter the size of elements\n");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Invalid input\n");
		exit(0);
	}
	
	else
	{
		printf("Enter elements\n");
		for(i=0;i<n;i++)
		{
			
			scanf("%d",&ptr[i]);
		}
	}
	printf("Elements are\n");
	for(i=0;i<n;i++)
		{
			
			printf("%d\t",ptr[i]);
		}
		int max=ptr[0];
	for(i=0;i<n;i++)
	{
		if(ptr[i]>max)
		{
			max=ptr[i];
		}
	}
	int min=ptr[0];
	for(i=0;i<n;i++)
	{
		if(ptr[i]<min)
		{
			min=ptr[i];
		}
	
	}
	printf("Max = %d\nMin = %d\n",max,min);
	int sum;
	sum=max+min;
	printf("The sum is : %d",sum);
}
