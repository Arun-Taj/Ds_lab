//insert and delete at the end of the singly linked list
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int info;
	struct Node *next;
};
typedef struct Node Nodetype;
Nodetype *head=NULL,*newNode,*temp;
void insert(int item)
{
	newNode=(Nodetype *)malloc(sizeof(Nodetype));
	newNode->info=item;
	if(head==NULL)
	{
		newNode->next=NULL;
		head=newNode;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		newNode->next=NULL;
		temp->next=newNode;
	}
	printf("Inserted successfully....\n");
}
void delete()
{
	if(head==NULL)
	{
		printf("No items to delete\n");
	}
	else if(head->next==NULL)
	{
		temp=head;
		//head=NULL;
		printf("The deleted item is : %d",temp->info);
		free(temp);
	}
	else
	{
		temp=head;
		while(temp->next->next!=NULL)	
			temp=temp->next;
			printf("The deleted item is : %d",temp->next->info);
			free(temp->next); 
			temp->next=NULL;
		
	}
}
void display()
{
	if(head==NULL)
	{
		printf("NO items to display\n");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d\t",temp->info );
			temp=temp->next;
		}
	}
}
int main()
{
	int ch,item;
	while(1)
	{
		printf("\n1.Insert\t2.Delete\t3.Display\t4.Exit\n");
		printf("Enter your choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter item to insert\n");
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
							break;
		}
	}
}
