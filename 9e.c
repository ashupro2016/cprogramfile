#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char *s[]={
	"to err is human...",
	"But to really mess things up...",
	"One needs to know C!!"};
	
	int i;
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
void reverse(char *t)
{



while(*t!='\0')
{
	s[i]=*t;
	i++;
	t++;
}

len=strlen(s);
printf("%d",len);
for(i=len;i>=0;i++)
{printf("%s",s[i]);
	
}
	
}
