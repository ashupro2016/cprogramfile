#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[15],n,i;
	printf("number of element to be inserted\n");
	scanf("%d",&n);
	printf("enter element int array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("entered element in array\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
		
	}
	getch();
	return 0;
}
