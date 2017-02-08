#include<stdio.h>
#include<conio.h>
int main()
{
	struct book
	{char name[10];
	float price;
	int pages;
	
	};
	struct book b[5];
	int i;
	for(i=0;i<5;i++)
	{printf("enter name,price and pages\n");
	scanf("%s%f%d",&b[i].name,&b[i].price,&b[i].pages);
	}
	for(i=0;i<5;i++)
	{
	printf("%s\t%f\t%d\n",b[i].name,b[i].price,b[i].pages);
	}
	getch();
	return 0;
}
void linkfloat()
{
	float a=0,*b;
	b=&a;
	a=*b;
}
