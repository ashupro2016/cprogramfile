#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node* next;
};
struct node* top;
void push(int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=top;
	top=temp;
}
void pop()
{if(top==NULL)
{return;
}
struct node* temp=top;
top=temp->next;
free(temp);
}
void tope()
{if(top==NULL)
{printf("list is empty\n");
return ;
}
	printf("top element is %d\n",top->data);
}
void isempty()
{if(top==NULL)
{printf("list is empty\n");

}
else
printf("list is not empty\n");
}
void print()
{struct node* temp=top;
printf("list is:\n");
while(temp!=NULL)
{printf("%d ",temp->data);
temp=temp->next;
}
printf("\n");
}
int main()
{top=NULL;
isempty();
push(2);
push(3);
print();
pop();
print();
push(4);
push(6);
push(7);
print();
isempty();
tope();
getch();
return 0;

}

