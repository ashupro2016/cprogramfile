#include<stdio.h>
#include<conio.h>
int main()
{
	char source[]="lagja";
	char target[]="gale";
	xstrcat(source,target);
	getch();
	return 0;
}
void xstrcat(char *s,char *t)
{
	int i=0,j;
	while(*t!='\0')
	{
		i++;
		t++;
	}
	for(j=0;*s!='\0';j++)
	{
		*t=*s;
		t++;
		s++
	}
	*t='\0'
}
