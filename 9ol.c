#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char *name[6];
	char n[50];
	int len,i;
	char *p;
	for(i=0;i<6;i++)
	{
		printf("enter name");
		scanf("%s",n);
		len=strlen(n);
	p=(char*)malloc(len+1);
	strcpy(p,n);
	name[i]=p;
	}
	for(i=0;i<=5;i++)
	{
		printf("%s\n",name[i]);
	}
	return 0;
}
