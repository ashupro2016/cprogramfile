#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{int data;
struct node* next;
};

struct node* insert(struct node* head,int x)
{
	struct node* h=(struct node*)malloc(sizeof(struct node));
	h->data=x;
	h->next=NULL;
	if(head==NULL)
	{head=h;
	return head;
	}
	struct node* h1=head;
	while(h1->next!=NULL)
	{h1=h1->next;
	}
	h1->next=h;
	return head;
	
}
struct node* reverse(struct node *p)
{struct node* head;
	if(p->next==NULL)
	{
	 head=p;
		return head;
	}
	head=reverse(p->next);
	
	p->next->next=p;
	//struct node *q=p->next;
	//q->next=p;
	p->next=NULL;
	return head;
}
void show(struct node* head)
{printf("list is:\n");
	while(head!=NULL)
	{printf("%d ",head->data);
	head=head->next;
	}
	printf("\n");
	
}
int main()
{struct node* head=NULL;
head=insert(head,1);
head=insert(head,2);
head=insert(head,3);
head=insert(head,4);
show(head);
head=reverse(head);
show(head);
getch();
return 0;
	
}
