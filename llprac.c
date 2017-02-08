#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node* next;
};
struct node* head;
void insert(int n)
{struct node* temp=(struct node*)malloc(sizeof(struct node));
struct node* temp1=head;
temp->data=n;
temp->next=NULL;
if(head==NULL)
{head=temp;
return ;
}
while(temp1->next!=NULL)
{temp1=temp1->next;
}
temp1->next=temp;

}
void display()
{struct node* temp=head;
printf("list is:\n");
while(temp!=NULL)
{printf("%d ",temp->data);
temp=temp->next;
}
printf("\n");
}
void delete(int n)
{struct node* temp;
struct node* temp1;
int i;
temp=head;
if(n==1)
{head=temp->next;
free(temp);
return;
}
for(i=0;i<n-2;i++)
{temp=temp->next;
}
temp1=temp->next;
temp->next=temp1->next;
free(temp1);
}
int main()
{head=NULL;
insert(1);
insert(2);
insert(3);
insert(4);
display();
delete(1);
display();
delete(2);
display();
getch();
return 0;
}
