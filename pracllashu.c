#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node* next;
};
//struct node* head;

struct node* insert(struct node* head,int n)
{struct node* temp=(struct node*)malloc(sizeof(struct node));
struct node* temp1=head;
temp->data=n;
temp->next=NULL;
if(head==NULL)
{head=temp;
return head;
}
while(temp1->next!=NULL)
{temp1=temp1->next;
}
temp1->next=temp;
return head;
}

void display(struct node *head)
{struct node* temp=head;
printf("list is:\n");
while(temp!=NULL)
{printf("%d ",temp->data);
temp=temp->next;
}
printf("\n");
}
struct node* reverse(struct node* head)
{
	struct node* next;
	struct node* curr;
	struct node* prev=NULL;
	curr=head;
	while(curr!=NULL)
	{next=curr->next;
	curr->next=prev;
	prev=curr;
	curr=next;
	}
	head=prev;
	return head;
}

struct node* delete(struct node* head,int n)
{struct node* temp;
struct node* temp1;
int i;
temp=head;
if(n==1)
{head=temp->next;
free(temp);
return head;
}
for(i=0;i<n-2;i++)
{temp=temp->next;
}
temp1=temp->next;
temp->next=temp1->next;
free(temp1);
}
int main()
{ struct node* head=NULL;
head=insert(head,1);
head=insert(head,2);
head=insert(head,3);
head=insert(head,4);
display(head);
head=reverse(head);
display(head);
/*head=delete(head,1);
display(head);
delete(head,2);
display(head);
*/getch();
return 0;
}
