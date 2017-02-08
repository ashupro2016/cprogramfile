#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct linkedlist
{int data;
struct linkedlist *node;
};
int main()
{struct linkedlist *first,*second,*third,*head;
//first=n;
//second=null;
//third=null;
//head=(struct linkedlist)malloc(sizeof(struct linkedlist));
head=(struct linkedlist*)malloc(sizeof(struct linkedlist));
first=(struct linkedlist*)malloc(sizeof(struct linkedlist));
second=(struct linkedlist*)malloc(sizeof(struct linkedlist));
third=(struct linkedlist*)malloc(sizeof(struct linkedlist));
//first->data=23;
//first->node=NULL;
//second->data=25;
//second->node=first;
//third->data=26;
//third->node=second;

(*first).data=2;
(*first).node=NULL;
(*second).data=3;
(*second).node=first;
(*third).data=4;
(*third).node=second;
head->node=third;
while(head->node!=NULL)
{head=head->node;
printf("%d\n",head->data);
}
getch();
return 0;
}
