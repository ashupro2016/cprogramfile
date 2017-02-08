#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],num,i,pos;
	printf("enter number of element in array\n");
	scanf("%d",&num);
	printf("enter element in array\n");
	for(i=0;i<num;i++)
	{scanf("%d",&arr[i]);
	
	}
		printf("entered element\n");
	for(i=0;i<num;i++)
	{printf("arr[%d]=%d\n",i,arr[i]);
	
	}
	printf("enter postion\n");
	scanf("%d",&pos);
	for(;pos<num;pos++)
	{arr[pos]=arr[pos+1];
	
	}
	num--;
	printf("array after deletion \n");
	for(i=0;i<num;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	getch();
	return 0;
}
