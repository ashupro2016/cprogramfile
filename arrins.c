#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],num,i,pos,elem;
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
	printf("enter postion and element\n");
	scanf("%d%d",&pos,&elem);
	
	for(i=num;num>=pos;num--)
	{arr[num]=arr[num-1];
	
	}
	num++;

arr[pos-1]=elem;
	printf("array after insertion \n");
	for(i=0;i<num;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	getch();
	return 0;
}
