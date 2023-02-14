#include<stdio.h>
#include<conio.h>
int front=-1;
int rear=-1;
int size=5;
void enque(int queue[],int item)
{
	if(rear==size-1)
	{printf("Queue is full\n");}
	 
	else
	{	
			if(front==-1)
			{
				front=0;
			}
		rear++;
		queue[rear]=item;
	}
}
void deque(int queue[])
{
	if(front==-1)
	{
		printf("Queue is empty\n");
	}
	else if(front!=rear)
	{
		
		printf("The item dequed is : %d\n",queue[front]);
		front++;
	}
		
}
void display(int queue[])

{
	if(front==-1||front>rear)	
	{
		printf("Queue is empty\n");
		
	}
	else
	{ 
		int i;
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
}
int main()
{
	int item,queue[5],ch;
	while(1)
	{
		printf("\n1.enque\t2.deque\t3.display\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter your item\n");
				scanf("%d",&item);
				enque(queue,item);
				break;
				case 2:
					deque(queue);
					break;
					case 3:
						display(queue);
						break;
						
		}
	}
}
