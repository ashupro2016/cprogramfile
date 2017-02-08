#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{int data;
struct node* next;
};
void push(struct node** head,int newdata)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=newdata;
	newnode->next=*head;
	*head=newnode;
}
void append(struct node** head,int newdata)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	struct node* last=*head;
	newnode->data=newdata;
	newnode->next=NULL;
	if(*head==NULL)
	{*head=newnode;
	return;
	}
	while(last->next!=NULL)
	{last=last->next;
	}
	last->next=newnode;
	return ;
}
void addafter(struct node* head,int newdata)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{printf("cannot be null\n");
	return ;
	}
	newnode->data=newdata;
	newnode->next=head->next;
	head->next=newnode;
}
void printlist(struct node* node)
{while(node!=NULL)
{printf("%d\n",node->data);
node=node->next;
}
}
int main()
{
	struct node* head=NULL;
	push(&head,2);
	push(&head,3);
	push(&head,4);
	append(&head,5);
	addafter(head->next->next,6);
	printf("inserted element is\n");
	printlist(head);
getch();
return 0;
}
