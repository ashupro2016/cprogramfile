#include<stdio.h>
#include<conio.h>
struct node
{int data;
struct node* next;
};
void insert(struct node** head,int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=*head;
	*head=temp;
	
}
void display(struct node* head)
{printf("list is:\n");
while(head!=NULL)
{printf("%d ",head->data);
head=head->next;
}
printf("\n");
}
int main()
{
struct node* head=NULL;
int n,i,x;
printf("enter number of elements \n ");
scanf("%d",&n);
printf("enter elements\n");
for(i=0;i<n;i++)
{scanf("%d",&x);
insert(&head,x);
display(head);
}
getch();
return 0;
}
