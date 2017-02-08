#include<stdio.h>
#include<conio.h>
int main()
{
	char str[10];
	int t;
	printf("enter string\n");
	scanf("%s",str);
	printf("%s\n",str);
	t=atoi(str); 
    printf("%d",t);
    getch();
    return 0;
    
}
