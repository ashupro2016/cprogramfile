#include<stdio.h>
#include<conio.h>
int main()
{
	char name[][10]={
	"akshay",
	"parag",
	"raman",
	"gopal",
	"rajesh",
	"srinivas"
	};
	int i;
	char t;
	printf("orignal :%s %s\n",&name[2][0],&name[3][0]);
	for(i=0;i<=9;i++)
	{
		t=name[2][i];
		name[2][i]=name[3][i];
		name[3][i]=t;
	}
	printf("new :%s %s\n",&name[2][0],&name[3][0]);
	getch();
	return 0;
	
}
