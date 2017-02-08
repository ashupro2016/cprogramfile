#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node* next;
};
//struct node* head;
struct node* insert(struct node* head,int x)
{struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=head;
if(head!=NULL)
{temp->next=head;
}
head=temp;


return head;
}
void print(struct node* head)
{//struct node *temp=head;
printf("list is: ");
/*while(temp!=NULL)
{printf(" %d",temp->data);
temp=temp->next;
}*/
while(head!=NULL)
{printf(" %d",head->data);
head=head->next;
}
printf("\n");
}
int main()
{struct node* head=NULL;
int n,x,i;
printf("enter number of elements u want to insert\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("enter number\n");
	scanf("%d",&x);
	head=insert(head,x);
	print(head);
}
}
