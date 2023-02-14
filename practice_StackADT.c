//Stack as ADT
#include<stdio.h>
#include<stdlib.h>
int top=-1;
int size=5;

void push(int stack[],int items)
{	//printf("Enter the element you want\n");
	
	if(top>size)
	{
		printf("The stack is overflowed, please remove some values\n");
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
	printf("\nThe poped element is %d\n",stack[top]);
	top--;
	
}
void findTop(int stack[])
{
	if(top==-1)
	{
		printf("Stack is underflowed\n");
	}
	else 
	printf("The last element is %d",stack[top]);
	
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
		for(i=0;i<5;i++)
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
		
		printf("\n1.Push\t2.Pop\t3.FindTop\t4.Display\t5.Exit\n");
		//scanf("%d",&ch);
		printf("ENter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			
			case 1:
			printf("ENter the items\n");
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
