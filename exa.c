#include<stdio.h>
#include<conio.h>
int main()
{
	struct book
	{char name;
	float price;
	int page;
	}b1,b2,b3;
	
	printf("enter name price and number of pages of 3 books\n");
	scanf("%c%f%d",&b1.name,&b1.price,&b1.page);
	scanf("%c%f%d",&b2.name,&b2.price,&b2.page);
	scanf("%c%f%d",&b3.name,&b3.price,&b3.page);
printf("data u entered\n");
printf("%c\t%.2f\t%d\n",b1.name,b1.price,b1.page);
printf("%c\t%.2f\t%d\n",b2.name,b2.price,b2.page);
printf("%c\t%.2f\t%d\n",b3.name,b3.price,b3.page);
getch();
return 0;
}
