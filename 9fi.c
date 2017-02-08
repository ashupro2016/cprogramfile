#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[10][100];
	int i;
	for(i=0;i<10;i++)
	{
		printf("enter name\n");
		//scanf("%[^\n]s",s1[i]);
	gets(s1[i]);
	}
	for(i=0;i<10;i++)
	{
		abbr(s1[i]);
		printf("\n");
	}
	getch();
	return 0;

}
void abbr(char s2[100])
{char ashu[20];
int i=0,j=0;
while(s2[i]!='\0')
{
	ashu[j]=s2[i];
	if(s2[i]==' ')
	{
		printf("%c",toupper(ashu[0]));
		j=-1;
	}
	j++;
	i++;
	
}
ashu[j]='\0';
	printf("%s",ashu);
}
