#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
	
};
typedef struct Node Nodetype;
Nodetype *head=NULL,*temp,*newNode;
void insert(int item);
void delete();
void display();
int main()
{
	int ch,item;
	printf("Enter your choice\n");
	while(1)
	{
		printf("\n1.Insert\t2.delete\t3.display\t4.exit\n");
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
							break;
		}
	}
}
void insert(int item)
{
	newNode=(Nodetype*)malloc(sizeof(Nodetype));
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
		head=head->next;
		free(temp);
		printf("Deleted successfully\n");
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
