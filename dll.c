#include<stdio.h>
#include<conio.h>
struct node
{int data;
struct node* next;
struct node* prev;
};
struct node* head;

struct node* getnewnode(int x)
{struct node* newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=NULL;
newnode->prev=NULL;
return newnode;
}
void insertatEnd(int x)
{struct node* newnode=getnewnode(x);
if(head==NULL)
{head=newnode;
return ;
}
struct node* temp=head;
while(temp->next!=NULL)
{temp=temp->next;
}
temp->next=newnode;
newnode->prev=temp;
}
void insertatHead(int x)
{struct node* newnode=getnewnode(x);
if(head==NULL)
{head=newnode;
return ;
}
head->prev=newnode;
newnode->next=head;
head=newnode;
}

void print()
{struct node* temp=head;
printf("forward:\n");
while(temp!=NULL)
{printf("%d ",temp->data);
temp=temp->next;
}
printf("\n");
}

void reverseprint()
{
	struct node* temp=head;
	if(temp==NULL)
	return ;
	while(temp->next!=NULL)
	{temp=temp->next;
	}
	printf("reverse list:\n");
	while(temp!=NULL)
	{printf("%d ",temp->data);
	temp=temp->prev;
	}
	printf("\n");
 } 
 int main()
 {head=NULL;
 insertatHead(1);
 print();
 reverseprint();
 insertatHead(2);
 print();
 reverseprint();
 insertatHead(3);
 print();
 reverseprint();
 insertatHead(4);
 print();
 reverseprint();
 insertatEnd(5);
 print();
 //reverseprint();
 insertatEnd(6);
 print();
// reverseprint();
 
 
 
 getch();
 return 0;
 }
