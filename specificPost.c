#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
typedef struct Node Nodetype;
Nodetype *head=NULL,*temp,*link,*newNode;

void insert(int item)
{
	newNode=(Nodetype*)malloc(sizeof(Nodetype));
	newNode->data=item;
	newNode->next=head;
	head=newNode;
	
}
void IASP(int item,int pos)
{
	int i;
	if(head==NULL)
	{
		printf("No specific position to insert\n");
		return;
	}
	else
	{
		temp=head;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		newNode=(Nodetype*)malloc(sizeof(Nodetype));
		newNode->data=item;
		newNode->next=head;
		head=newNode;
	}
	
}
void display()
{
	if(head==NULL)
	{
		printf("No items to display\n");
		
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d\t",temp->data );
			temp=temp->next;
		}
	}
}
int main()
{
	int item,ch;
	printf("\n1.Insert\t2.Display\t3.")
}
