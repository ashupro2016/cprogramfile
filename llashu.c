#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{int data;
struct node* next;
};
void printlist(struct node*);
int main()
{struct node* first=(struct node*)malloc(sizeof(struct node));
struct node* second=(struct node*)malloc(sizeof(struct node));
 struct node* third=(struct node*)malloc(sizeof(struct node)); 
struct node* head;
head=first;
/*
first->data=2;
first->next=NULL;
second->data=3;
second->next=head;
head=second;
third->data=4;
third->next=head;
head=third;
*/
first->data=2;
first->next=NULL;
second->data=3;
second->next=NULL;
first->next=second;
third->data=4;
third->next=NULL;
second->next=third;
printlist(head);
	getch();
	return 0;
}
void printlist(struct node* n)
{while(n!=NULL)
{printf("%d\n",n->data);
n=n->next;
}
	
}
