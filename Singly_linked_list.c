#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
typedef struct Node Nodetype;
Nodetype *head=NULL,*temp,*newNode;
void insert(int item)
{
	newNode=(Nodetype*)malloc(sizeof(newNode));
	newNode->data=item;
	newNode->next=head;
	head=newNode;
}
void delete()
{
	if(head==NULL)
	{
		printf("No items to delete\n");
	}
	else
	{
		temp=head;
		head=newNode;
		free(temp);
		printf("Items deleted successfully\n");
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
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}
int main()
{
	int ch,item;
	printf("Enter your choice\n");
	while(1)
	{
		printf("\n1.Insert\t2.Delete\t3.Display\t4.exit!\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter data\n");
				scanf("%d",&item);
				insert(item);
				break;
				case 2:
					delete();
					break;
					case 3:
						display();
						break;
						case 4:
							exit(0);
		}
	}
}
