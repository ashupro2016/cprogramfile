#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{int i;
	char *s[]={
	"to err is human...",
	"But to really mess things up...",
	"One needs to kn ow C!!"};
	for(i=0;i<3;i++)
	{
		reverse(*(s+i));
	}
getch();
return 0;
}
void reverse(char *q)
{
	char *s;char target[100];
	s=target;
	int i=0;
	while(*q!='\0')
	{
		i++;
		q++;
	}
	while(i>=0)
	{--q;
	*s=*q;
	s++;
	i--;
		
	}
	*s='\0';
	i=0;
while(target[i]!='\0')
{
	printf("%c",target[i]);
	i++;
}
printf("\n");
}
