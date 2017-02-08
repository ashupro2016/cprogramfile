#include<stdio.h>
#include<conio.h>
//#include<string.h>
void xstrcat(char*,char*);
int main()
{
	char source[]="lagja bhai ";
	char target[45]="samjha launde";
	strcat(target,source);
	printf("target is =%s\n",target);
	printf("source is =%s\n",source);
	getch();
	return 0;
}
void xstrcat(char *s,char *t)
{
	while(*t!='\0')
	{t++;
	}
	for(;*s!='\0';s++,t++)
	{*t=*s;
		
	}
	*t='\0';
}

