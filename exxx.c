#include<stdio.h>
#include<conio.h>
int main()
{
	struct book
	{
		char name[10];
		float price;
		int age;
	};
	struct book b1={"ashu",13.0,344};
	struct book b2={"ashish",23,450};
	struct book b3={"abha",78.0,988};
	printf("%s\t%f\t%d\n",b1.name,b1.price,b1.age);
		printf("%s\t%f\t%d\n",b2.name,b2.price,b2.age);
			printf("%s\t%f\t%d\n",b3.name,b3.price,b3.age);
	getch();
	return 0;
	
	
}
