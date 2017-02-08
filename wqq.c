#include<stdio.h>
#include<conio.h>
struct book
{
	char name[15];
	float price;
	int pages;
};
void display(struct book);
int main()
{struct book b1={"ashu",230.00,300};
display(b1);
getch();
return 0;
}
void display(struct book b1)
{
	printf("%s\t%f\t%d\n",b1.name,b1.price,b1.pages);
}
