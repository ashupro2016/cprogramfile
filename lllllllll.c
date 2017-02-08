#include<stdio.h>
#include<conio.h>
int main()
{
	struct node
	{int data;
	struct node* next;
	};
	struct node* head=NULL;
	struct node *temp1;
	struct node* first=(struct node*)malloc(sizeof(struct node));
	struct node* second=(struct node*)malloc(sizeof(struct node));
	struct node* third=(struct node*)malloc(sizeof(struct node));
	struct node* fourth=(struct node*)malloc(sizeof(struct node));
	first->data=2;
	first->next=NULL;
	head=first;
	second->data=3;
	second->next=head;
	head=second;
	third->data=4;
	third->next=head;
	head=third;
	fourth->data=5;
	fourth->next=head;
	head=fourth;
	temp1=head;
	while(temp1!=NULL)
	{
	printf("%d\n",temp1->data);
	temp1=temp1->next;
	}
	getch();
	return 0;
	
	
	
}
