#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{int i;
	char *s[]={
	"to err is human...",
	"But to really mess things up...",
	"one needs to know C!!"};
	for(i=0;i<3;i++)
	{
		printf("%s\n",*(s+i));
	}
		for(i=0;i<3;i++)
	{
		reverse(*(s+i));
	}
	getch();
	return 0;
}
void reverse(char *p)
{   int len;
	char *t;
	while(*p!='\0')
	{
		*t=*p;
		t++;
		p++;
	}
	*t='\0';
	len=strlen(t);
	while(len!=0)
	{printf("%c",*(t+len));
	--len;
	}
}
