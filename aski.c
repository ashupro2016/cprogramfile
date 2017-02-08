#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char ashu[]="Jerry";
	char ashi[]="Ferry";
	int i,j,k;
	i=xstrcmp(ashu,"Jerry");
    j=xstrcmp(ashu,ashi);
    k=xstrcmp(ashu,"Jerry boy");
    printf("%d\n%d\n%d\n",i,j,k);
    getch();
    return 0;
}
int xstrcmp(char *t,char *s)
{
	int i;
	for(;*t!='\0'||*s!='\0';++t,++s)
	{
		if(*t==*s)
		continue;
		else
		{i=*t-*s;
		}
		return i;
	}
}
  
