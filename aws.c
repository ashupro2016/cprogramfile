#include<stdio.h>
#include<conio.h>
int main()
{int i;
	char str[80];
	printf("enter line\n");
	scanf("%[^\n]",str);
/*	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}*/
	for(i=0;str[i]!='\0';i++)
	{
		 if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'
		  ||str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
	{
		str[i]='  ';
	}
	else
	continue;
	}
	printf("%s",str);
	getch();
	return 0;
}
