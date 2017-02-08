#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{int i;
	char ashu[70];
	int len;
	
	printf("enter string\n");
	gets(ashu);
	puts(ashu);
	printf("\n");
	
 len=strlen(ashu);
	i=0;
	
	while(i<len)
	{ashu[i]=ashu[i]-32;
	i++;
	}
	

i=0;
	while(i<len)
	{
	printf("%c",ashu[i]);
	  i++;
	  }
	getch();
	return 0;
}
