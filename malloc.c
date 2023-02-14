//Wap to allocate memory for n data items using malloc() function and display it. After allocation find the sum of all data items and display sum. Release memory after printing sum.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	printf("Enter the size of elements\n");
	scanf("%d",&n);
	int* ptr;
	ptr=(int*)malloc(n*sizeof(int));
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
		for(i=0;i<n;i++)
		{
			printf("%d\t",ptr[i]);
		}
		
		printf("\n");
		int sum=0;
		for(i=0;i<n;i++)
		{
			sum+=ptr[i];
		}
		
		printf("Sum is : %d",sum);
	}
}
