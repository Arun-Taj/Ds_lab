#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
typedef struct Node Nodetype;
Nodetype *head=NULL,*newNode,*temp,*link;
void insert(int item)
{
	newNode=(Nodetype*)malloc(sizeof(Nodetype));
	newNode->data=item;
	newNode->next=head;
	head=newNode;
	
}
void insert_at_pos(int item,int pos)
{
	if(head==NULL)
	{
		printf("No specified position\n");
		return;
	}
	int i;
	temp=head;
	for(i=1;i<pos-1;i++)
	{
		temp=temp->next;
	}
	newNode=(Nodetype*)malloc(sizeof(Nodetype));
	link=temp->next;
	temp->next=newNode;
	newNode->next=link;
	newNode->data=item;
}
void display()
{
	if(head==NULL)
	{
		printf("No items to display\n");
	}
	else
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data );
		temp=temp->next;
	}
}
int main()
{
	int ch,item,pos;
	printf("Enter your choice\n");
	while(1)
	{
		printf("\n1.Insert\t2.Insert at specific pos\t3.display\t4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter item\n");
				scanf("%d",&item);
				insert(item);
				break;
				case 2:
					printf("Enter position\n");
					scanf("%d",&pos);
					printf("Enter item\n");
					scanf("%d",&item);
					insert_at_pos(item,pos);
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
