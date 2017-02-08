#include<stdio.h>
#include<conio.h>

int main()
{int i;
	char name[4];
	float price[3];
	int page[3];
	printf("enter names,price and pages:\n");
	for(i=0;i<3;i++)
	{
scanf("%c%f%d",&name[i],&price[i],&page[i]);
	}
	printf("data u entered\n");
		for(i=0;i<3;i++)
	{
		printf("%c\t%.3f\t%d\n",name[i],price[i],page[i]);
	}
	getch();
	return 0;
}
