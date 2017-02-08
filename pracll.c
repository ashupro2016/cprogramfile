#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node* next;
};
struct node* head;
void insert(int x)
{struct node* temp=(struct Node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=head;
head=temp;
}
void print()
{struct node *temp=head;
printf("List is :\n");
while(temp!=NULL)
{
	printf("%d ",temp->data);
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
	printf("enter elemennt\n");
	for(i=0;i<n;i++)
	{scanf("%d",&x);
	insert(x);
	print();
	}
getch();
return 0;
}
