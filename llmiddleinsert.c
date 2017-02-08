#include<stdio.h>
#include<conio.h>

struct node
{int data;
struct node* next;
};
int main()
{struct node *head,*first,*second,*third,*temp,*fourth;
*head=NULL;
*first=NULL;
*second=NULL;
*third=NULL;
*fourth=NULL;
*temp=(struct *node)malloc(sizeof(struct node));
fourth=(struct *node)malloc(sizeof(struct node));
head=(struct *node)malloc(sizeof(struct node));
first=(struct *node)malloc(sizeof(struct node));
second=(struct *node)malloc(sizeof(struct node));
third=(struct *node)malloc(sizeof(struct node));
first->data=2;
first->next=NULL;
head->next=first;
second->data=3;
second->next=head->next;
head->next=second;
third->data=4;
third->next=head->next;
head->next=third;
fourth->data=6;
fourth->next=NULL;
temp->next=head->next;
while(temp->next!=NULL)
{temp=temp->next;
if(temp->data==3);
break;

}
temp->next=fourth;
fourth->next=
	
}
