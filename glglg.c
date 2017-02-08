#include<stdio.h>
#include<conio.h>
int main()
{
	char ashu[]="ashutosh kumar";
	int len=xstrlen(ashu);
	printf("%d",len);
	getch();
	return 0;
}
int xstrlen(char *p)
{
	int i=0;
	while(*p!='\0')
	{i++;
	p++;
	}
return i;
}
