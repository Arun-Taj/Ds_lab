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
void pop(int stack[])
{
	if(top==-1)
	{
		printf("Stack is underflowed\n");
	}
	else
	printf("The poped out element from the stack is %d",stack[top]);
	top--;
}

void findTop(int stack[])
{
	if(top==-1)
	{
		printf("Stack is underflowed\n");
	}
	else
	printf("The poped out top element is %d",stack[top]);
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
		printf("\n1.push\t2.pop\t3.findtop\t4.display\t5.exit");
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
			pop(stack);
			break;
			case 3:
				findTop(stack);
				break;
				case 4:
					display(stack);
					break;
					case 5:
						exit(0);
						break;
		}
		
	}
}
