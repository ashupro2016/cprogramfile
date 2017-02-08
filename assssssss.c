#include<stdio.h>
#include<conio.h>
int main()
{
	struct address
	{
		char phone[15];
		char city[25];
		int pin;
		
	};
	struct emp
	{char name[15];
	struct address a;
	};
	struct emp e={"ashu","1234567","delhi",110096};
	printf("%s\t%s\t%s\t%d\n",e.name,e.a.phone,e.a.city,e.a.pin);
	getch();
	return 0;
	
}
