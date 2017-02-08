#include<stdio.h>
#include<conio.h>
int main()
{
	char source[]="ashubhai";
	char target[15];
    xstrcpy(target,source);
    printf("%s\n",source);
    printf("%s\n",target);
    getch();
    return 0;
}
void xstrcpy(char *p,char *q )
{
	while(*q!='\0')
	{
		*p=*q;
		q++;
		p++;
	}
	*p='\0';
	
}
