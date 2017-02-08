#include<stdio.h>
#include<conio.h>
struct node
{int data;
struct node* next;
};
struct node* top;
void push(int x)
{struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=top;
top=temp;
}
void pop()
{
	if(top==NULL)
	{return ;
	}
	top=top->next;
}
void tops()
{
	if(top==NULL)
	printf("list is empty\n");
	else
	printf(" element on the top %d\n",top->data);
}
void isempty()
{
	
}
