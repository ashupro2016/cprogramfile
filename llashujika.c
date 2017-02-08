#include<stdio.h>
#include<conio.h>

struct node
{int data;
struct node* next;
};
struct node* head;
void insert(int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=head;
	head=temp;
}
void display()
{
	struct node* temp=head;
	printf("print list:\n");
	while(temp!=NULL)
	{printf("%d ",temp->data);
	temp=temp->next;
	}
	printf("\n");
}
int main()
{
head=NULL;
int n,i,x;
printf("enter number of elements\n");
scanf("%d",&n);
printf("enter number\n");
for(i=0;i<n;i++)
{scanf("%d",&x);
	insert(x);
	display();
}
getch();
return 0;
}
