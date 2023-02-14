//quick sorting
#include<stdio.h>

	int arr[8]={2,4,1,5,7,6,8,3};
int n=sizeof(arr)/4;
int partition(int start,int end)	
	{
		int pivot=start+1;
		int temp;
		while(start<end){
			
		
		while(arr[start]<=arr[pivot])
		{
			start++;
		}
		while(arr[end]>arr[pivot])
		{
			end--;
		}
		if(start<end)
		{
			temp=arr[start];
			arr[start]=arr[end];
			arr[end]=temp;
		}
	}
	temp=arr[pivot];
	arr[pivot]=arr[end];
	arr[end]=temp;
	return end;
	}
	void quickSort(int start,int end){
		if(start<end){
			int pivot=partition(start,end);
			quickSort(start,pivot-1);
			quickSort(pivot+1,end);
		}
	}
	void display()
	{
		int i;
		printf("The sorted list is :\n");
		for( i=0;i<n;i++)
		{
			printf("%d\t",arr[i]);
			
		}
	}
 int main()
 {
 	quickSort(0,n-1);
 	display();
 	return 0;
 }
