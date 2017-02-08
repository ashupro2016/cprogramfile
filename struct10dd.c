#include<stdio.h>
#include<conio.h>
struct record
{char name[10];
int age;
int notest;
float avgrun;

};
int main()
{
	struct record r[5],temp;
	int i,j;
	for(i=0;i<5;i++)
	{printf("enter data of player %d:\n",i+1);
	printf("enter name\n");
	scanf("%s",&r[i].name);
	printf("enter age of player\n");
	scanf("%d",&r[i].age);
	printf("enter number of test matches played\n");
	scanf("%d",&r[i].notest);
	printf("enter average run");
	scanf("%f",&r[i].avgrun);
	}
	for(i=0;i<5;i++)
	{printf("entered data is %d\n",(i+1));
	printf("%s\t%d\t%d\t%f\n",r[i].name,r[i].age,r[i].notest,r[i].avgrun);
	}
	for(i=0;i<5;i++)
	{for(j=i+1;j<5;j++)
	{if(r[i].avgrun>r[j].avgrun)
	{temp=r[i];
	r[i]=r[j];
	r[j]=temp;
	}
	}
	}
	printf("after sorting\n\n\n");
		for(i=0;i<5;i++)
	{printf("entered data is %d\n",(i+1));
	printf("%s\t%d\t%d\t%f\n",r[i].name,r[i].age,r[i].notest,r[i].avgrun);
	}
	getch();
	return 0;
}
