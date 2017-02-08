#include<stdio.h>
#include<conio.h>
int main()
{
	struct book
	{char name[15];
	float rate;
	int pages;
	};
	struct book b1={"ashuji",23.45,200};
	printf("%u\n",&b1.name);
	printf("%u\n",&b1.rate);
	printf("%u\n",&b1.pages);
	getch();
	return 0;
	
}
