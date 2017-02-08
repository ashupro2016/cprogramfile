#include<stdio.h>
#include<conio.h>
int main()
{
	char *name[6];
	int i;
	for(i=0;i<=5;i++)
	{
		printf("enter name");
	    scanf("%s",name[i]);
	}
	getch();
	return 0;
}
