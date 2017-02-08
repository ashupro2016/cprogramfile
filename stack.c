#include<stdio.h>
#include<conio.h>
#define MAX 101
int arr[MAX];
int top=-1;
void push(int x)
{if(top==(MAX-1))
{printf("error :overflow occur\n");
return;
}
arr[++top]=x;
}
void pop()
{if(top==-1)
{printf("there is no element for pop\n");
return ;
}
--top;
}
void isempty()
{if(top==-1)
printf("list is empty");
else
printf("list is not empty");
}
void tope()
{printf("top element: %d\n",arr[top]);
}
void print()
{int i;
printf("stack is:");
for(i=0;i<top;i++)
{printf("%d ",arr[i]);
}
printf("\n");
}
int main()
{int n;
push(2);
print();
push(3);
print();
push(4);
print();
push(5);
print();
push(6);
print();
pop();
print();
pop();
print();
tope();
isempty();
getch();
return 0;
}

 

