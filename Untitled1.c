#include<conio.h>
#include<stdio.h>
int main()
{
	int i,pcount,ncount,zcount;
	pcount=0;
	ncount=0;
	zcount=0;
	char c='y';
	while(c=='y')
	{
		printf("enter number\n");
		scanf("%d",&i);
		if(i>0)
	{pcount++;
	}
	 if(i<0)
	{ncount++;

	}
	if(i==0)
	{
	zcount++;
}
	printf("want to entered another number\n");
	scanf("%c",&c);
	}

	printf("pcount is %d\n",pcount);
	printf("ncount is %d\n",ncount);
	printf("zcount is %d\n",zcount);
	return 0;
	getch();
}
