#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{int i,len,suc=0;
	char ashu[100];
	printf("enter line\n");
	gets(ashu);
	printf("%s\n",ashu);
	len=strlen(ashu);
	for(i=0;i<len-1;i++)
	{
	if((ashu[i]=='a'||ashu[i]=='A'||ashu[i]=='e'||ashu[i]=='E'||ashu[i]=='i'||ashu[i]=='I'||ashu[i]=='o'||ashu[i]=='O'||ashu[i]=='u'||ashu[i]=='U') &&
	 (ashu[i+1]=='a'||ashu[i+1]=='A'||ashu[i+1]=='e'||ashu[i+1]=='E'||ashu[i+1]=='i'||ashu[i+1]=='I'||ashu[i+1]=='o'||ashu[i+1]=='O'||ashu[i+1]=='u'||ashu[i+1]=='U'))
	{suc++;
		printf("%c%c\n",ashu[i],ashu[i+1]);
}
	else
	continue;
	}
	printf("number of occurence is %d\n",suc);
	getch();
	return 0;
	
}
