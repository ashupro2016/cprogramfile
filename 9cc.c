#include<stdio.h>
#include<conio.h>
int main()
{
	char *p="Working with string is fun";
	int n;
	printf("enter value of n\n");
	scanf("%d",&n);
	while(*p!='\0')
	{if(*p==' ')
	break;
		printf("%c",*(p+n));
		p++;
	}
getch();
return 0;
}
