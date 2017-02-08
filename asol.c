#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char *ash[6];
	char n[50];
	char *p;
	int len;
	int i;
	for(i=0;i<6;i++)
	{printf("enter name\n");
	scanf("%s",n);
	len=strlen(n);
	p=(char*)malloc(len+1);
	strcpy(p,n);
	ash[i]=p;
}
for(i=0;i<6;i++)
{
	printf("%s\n",ash[i]);
}
	getch();
	return 0;
	
}
