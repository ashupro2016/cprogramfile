#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{int i;
	char *s[]={
	"To err is human...",
	"But to really mess things up...",
	"One needs to know C!!"};
	for(i=0;i<3;i++)
	{printf("%s\n",*(s+i));
	}
for(i=0;i<3;i++)
{
	reverse(*(s+i));
}
	return 0;
	getch();
}

void reverse(char *q)
{int len=strlen(q);
int i;
printf("\n");
for(i=len;i>=0;i--)
printf("%c",*(q+i));
	 
	
	 }

