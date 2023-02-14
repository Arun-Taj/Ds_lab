#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
typedef struct node nodeType;
nodeType *head=NULL,*newNode,*temp;
void insert(int item)
{
	newNode=(nodeType*)malloc(sizeof(nodeType));	
	newNode->info=item;
	newNode->next=head;
	head=newNode;
}
void delete()
{
	if(head==NULL)
	{
		printf("No elements to delete\n");
	}
	else
	{
		temp=head;
		head=head->next;
		printf("Item deleted is : %d\n",temp->info);
		free(temp);
	}
}
void display()
{
	temp=head;
	while(temp!=NULL)
{
	printf("%d\t",temp->info);
	temp=temp->next;
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
		printf("Enter your item:\n");
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
					default:
						break;
	}
		
	}
}
