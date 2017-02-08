#include<stdio.h>
#include<conio.h>
int main()
{
	char s[100];
	int n,pos;
	int i=0;
	printf("enter string\n");
	gets(s);
	printf("enter number of character\n");
	scanf("%d",&n);
	printf("enter starting position\n ");
	scanf("%d",&pos);
	puts(s);
	if(n==0)
	{
		while(s[i]!='\0')
		{
			if(i>pos-1)
			{printf("%c",s[i]);
			
			}
			i++;
		}
	}
	else
	{
		while(s[i]!='\0')
		{
			if(i>=pos-1 && i<=(pos-1)+(n-1))
			{printf("%c",s[i]);
			}
			i++;
		}
	}
	
	getch();
	return 0;
}
