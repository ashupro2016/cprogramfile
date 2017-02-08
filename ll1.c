#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{int data;
struct node* next;

};
int main()
{struct node *first,*second,*third,*head,*temp;
head=NULL;
first=NULL;
second=NULL;
third=NULL;

head=(struct node*)malloc(sizeof(struct node));
first=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
temp=(struct node*)malloc(sizeof(struct node));
first->data=2;
first->next=NULL;
head->next=first;
second->data=3;
second->next=head->next;
head->next=second;
third->data=4;
third->next=head->next;
head->next=third;
temp->next=head->next;
while(temp->next!=NULL)
{
temp=temp->next;
	printf("%d\n",temp->data);
	
}
getch();
return 0;
}
