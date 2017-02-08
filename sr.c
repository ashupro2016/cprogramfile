#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char source[]="lagjagale";
	char target[50];
	strcpy(target,source);
	printf("%s\n",source);
	printf("%s\n",target);
	getch();
	return 0;
}
