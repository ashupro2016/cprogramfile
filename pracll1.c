#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* head;
void insert(int x,int n)
{int i;
	struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(n==1)
    {temp->next=head;
    head=temp;
	return;
	}
	struct node* temp2=head;
	for(i=0;i<n-2;i++)
	{temp2=temp2->next;
	}
	temp->next=temp2->next;
	temp2->next=temp;
}
void display()
{
	struct node* temp1=head;
	printf("list is:\n");
	while(temp1!=NULL)
	{printf("%d ",temp1->data);
	temp1=temp1->next;
	}
	printf("\n");
}
int main()
{
	head=NULL;
    insert(2,1);
    insert(3,2);
    insert(4,1);
    insert(3,3);
    insert(6,4);
    display();
    getch();
    return 0;
    
    
}

