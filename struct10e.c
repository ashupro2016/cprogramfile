#include<stdio.h>
#include<conio.h>
struct employee
{int empcode;
char name[20];
int dd,mm,yy;
};
int main()
{
	struct employee e[4];
	int i,d,m,y;
	for(i=0;i<4;i++)
	{printf("enter data of employee %d\n",i+1);
	printf("enter empcode\n");
	scanf("%d",&e[i].empcode);
	printf("enter name\n");
	scanf("%s",&e[i].name);
	printf("enter date month and year\n");
	scanf("%d%d%d",&e[i].dd,&e[i].mm,&e[i].yy);
	
	}
	
	for(i=0;i<4;i++)
	{printf("entered  data of employee %d\n",i+1);
	printf("%d\t%s\t%d:%d:%d\n",e[i].empcode,e[i].name,e[i].dd,e[i].mm,e[i].yy);
	
	}
	printf("\n\n\n");
	printf("enter date,month,and year\n");
	scanf("%d%d%d",&d,&m,&y);
	
	for(i=0;i<4;i++)
	{if((y-e[i].yy)>=3)
	{printf("%s\n",e[i].name);
	
	}
	}
	getch();
	return 0;
}
