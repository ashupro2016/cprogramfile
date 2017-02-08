#include<stdio.h>
#include<conio.h>
void linkfloat();
int main()
{
	struct book{
	char name[10];
	float rate;
	int page;
	};
	struct book [5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter name price and page\n");
		scanf("%s%f%d",&book[i].name,&book[i].rate,&book[i].page);
	}
	for(i=0;i<5;i++)
	{
		printf("enter name price and page\n");
		printf("%s\t%f\t%d\n",book[i].name,book[i].rate,book[i].page);
	}
	getch();
	return 0;
	
}
void linkfloat
{float a=0,*b;
b=&a;
a=*b;
}
