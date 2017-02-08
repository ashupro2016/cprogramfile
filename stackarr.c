#include<stdio.h>
#include<conio.h>
# define MAX 100
int a[MAX];
int top=-1;

void push(int x)
{if(top==(MAX-1))
{printf("stack is full,overflow\n");
return ;
}
top=top+1;
a[top]=x;
}

void pop()
{if(top==-1)
{
	printf("there is no element for pop\n");
return ;
}
--top;
}

void topp()
{printf(" top element on stack %d \n",a[top]);
}

void print()
{int i;
printf("list is:\n");
for(i=0;i<=top;i++)
{printf("%d ",a[i]);

}
printf("\n");
}
void isempty()
{if(top==-1)
printf("list is empty\n");
else
printf("list is not empty\n");
}

int main()
{isempty();
push(3);
push(2);
print();
push(4);
print();
topp();
pop();
topp();
isempty();
getch();
return 0;

	
}
