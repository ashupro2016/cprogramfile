#include<stdio.h>
#include<conio.h>
void xstrcpy(char*,const char*);
int main()
{
	char source[]="lag ja gale";
	char target[30];
	xstrcpy(target,source);
	printf("%s\n",source);
	printf("%s\n",target);
	getch();
	return 0;
}
void xstrcpy(char *t,const char *s)
{while(*s!='\0')
{
	*t=*s;
	t++;
	s++;
}
*t='\0';
//s=s-5;
//*s='t';
}
