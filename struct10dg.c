#include<stdio.h>
#include<conio.h>
struct date
{int date;
int month;
int year;
};
int main()
{
	struct date d1;
	int d,m,y;
	printf("enter date\n");
	scanf("%d",&d1.date);
	printf("enter month\n");
	scanf("%d",&d1.month);
	printf("enter year\n");
    scanf("%d",&d1.year);
    printf("enter date,mont and year for comparion\n");
    scanf("%d%d%d",&d,&m,&y);
    printf("enterd 1st date is %d:%d:%d\n",d1.date,d1.month,d1.year);
    printf("enterd 2nd date is %d:%d:%d\n",d,m,y);
    if(d1.date==d && d1.month==m && d1.year==y)
    {printf("date are equal\n");
	}
	else
	printf("unequal");
    getch();
    return 0;
}
