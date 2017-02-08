#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{int data;
struct node* next;
};
void print(struct node* p)
{if(p==NULL)
{
return;
}
printf("%d ",p->data);
print(p->next);
}
void reverseprint(struct node* p)
{if(p==NULL)
{
return ;
}
reverseprint(p->next);
printf("%d ",p->data);
}
struct node* insert(struct node* head,int data)
{struct node* temp=(struct node*)malloc(sizeof(struct node));
struct node* temp1;
temp->data=data;
temp->next=NULL;
if(head==NULL)
{head=temp;
}
else
{temp1=head;
while(temp1->next!=NULL)
{temp1=temp1->next;
}
temp1->next=temp;
}
return head;
}
int main()
{
	struct node* head=NULL;
	head=insert(head,2);
	head=insert(head,4);
	head=insert(head,6);
	head=insert(head,5);
	print(head);
printf("\n");
    reverseprint(head);	
	getch();
	return 0;
}
