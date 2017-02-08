#include<stdio.h>
#include<conio.h>
int main()
{
	char *s[]={
	"to err is human...",
	"But to really mess things up...",
	"one needs to know C!!"};
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
{char ashu[80];
int i=0;
int len;
	while(*t!='\0')
	{ashu[i]=*t;
	t++;
	i++;
	}
	len=strlen(ashu);
	//printf("%d\n",len);
	//printf("%s\n",ashu);
	printf("\n");
for(i=(len-1);i>=0;i--)
{
	printf("%c",ashu[i]);
}

}
