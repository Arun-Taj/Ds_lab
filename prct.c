#include<stdio.h>
#include<stdlib.h>
int top=-1;
int size=5;
void push(int stack[],int items)
{
	if(top>size)
	{
		printf("Stack is overflowed\n");
		
	}
	else
	top++;
	stack[top]=items;
}



void display(int stack[])
{
	if(top==-1)
	{
		printf("Stack is underflowed\n");
	}
	else
	{
		int i;
		for(i=0;i<size;i++)
		{
			printf("%d\t",stack[i]);
		}
	}
}
int main()
{
	int items;
	int stack[10];
	while(1)
	{
		int ch;
		printf("\n1.push\n2.display\t3.exit");
		printf("\nEnter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter elements\n");
				scanf("%d",&items);
				push(stack,items);
				break;
				case 2:
			
					display(stack);
					break;
					case 3:
						exit(0);
						break;
		}
		
	}
}
