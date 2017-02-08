#include<stdio.h>
#include<conio.h>
//#include<string.h>
int xstrcmp(char*,char*);
int main()
{
	char str[]="jerry";
	char str2[]="ferry";
	int i,j,k;
	i=xstrcmp(str,"jerry");
	j=xstrcmp(str,str2);
	k=xstrcmp(str,"jerry boy");
printf("%d\n%d\n%d\n",i,j,k);
getch();
return 0;
}
int xstrcmp(char *p,char *q)
{
	int i=0;
	for(;(*p!='\0')||(*q!='\0');p++,q++)
	{if(*p==*q)
	continue;
	else
	{i=*p-*q;
	return i;
	}
}
	return i;
}
