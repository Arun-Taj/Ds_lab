#include <stdio.h>
#include <stdlib.h>

//Doubly Linked List - Begining Position
//create a node
struct Node{
    int info;
    struct Node *prev;
    struct Node *next;
};

typedef struct Node NodeType;
NodeType *head=NULL, *newNode, *temp;

void insertItem(){
    int item;
    printf("Enter any element\n");
    scanf("%d",&item);
    newNode=(NodeType *) malloc(sizeof(NodeType));
    newNode->info=item;
    if(head==NULL){
        newNode->prev=NULL;
        newNode->next=NULL;
        head=newNode;
    }else{
        newNode->prev=NULL;
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
    printf("Inserted Successfully !\n");
}

void deleteItem(){
   //empty or not
    if(head==NULL)
        printf("No Elements to Delete !\n");
    //only one node or not
    else{
        if(head->next==NULL){
            temp=head;
            head=NULL;
            free(temp);
        }else{
            temp=head;
            head=temp->next;
            head->prev=NULL;
            free(temp);
        }
        printf("Deleted !\n");
    }
}

void display(){
    temp=head;
    printf("Elements are:");
    while(temp!=NULL){
        printf("%d\t",temp->info);
        temp=temp->next;
    }
}

int main(){
    int ch;
x:
    printf("\n1.Insert  2. Delete  3. Display  4. Exit\n");
    printf("Enter your choice:\n");
    scanf("%d",&ch);
    switch (ch) {
        case 1:
            insertItem();
            break;
        case 2:
            deleteItem();
             break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            break;
    }
    goto x;

}
