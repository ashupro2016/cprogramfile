#include<stdio.h>
#include<conio.h>
int main()
{
	char ashu[10]="123456";
	int i=0;
	int sum=0;
	//printf("enter string\n");
	//scanf("%s",ashu);
	while(ashu[i]!='\0')
	{sum=sum*10+(ashu[i]-'0');
		i++;
	}
	printf("%d\n",sum);
}
