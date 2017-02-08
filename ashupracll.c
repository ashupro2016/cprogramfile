#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{int data;
struct node* next;
};
struct node* head;
void insert(x)
{
	struct node* h=(struct node*)malloc(sizeof(struct node));
	h->data=x;
	h->next=NULL;
	if(head==NULL)
	{head=h;
	return;
	}
	struct node* h1=head;
	while(h1->next!=NULL)
	{h1=h1->next;
	}
	h1->next=h;
	
}
void reverse(struct node *p)
{
	if(p->next==NULL)
	{
		head=p;
		return;
	}
	reverse(p->next);
	p->next->next=p;
	//struct node *q=p->next;
	//q->next=p;
	p->next=NULL;
}
void show(struct node *head)
{printf("list is:\n");
	while(head!=NULL)
	{printf("%d ",head->data);
	head=head->next;
	}
	printf("\n");
	
}
int main()
{head=NULL;
insert(1);
insert(2);
insert(3);
insert(4);
show(head);
reverse(head);
show(head);
getch();
return 0;
	
}
