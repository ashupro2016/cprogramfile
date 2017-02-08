#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int arr[10]={1,2,3};
	//int len=strlen(arr);
	int n,pos,j,i;
	printf("array before insertion\n");
	for(i=0;i<3;i++)
	{printf("%d\n",arr[i]);
	}
	printf("enter number to be inserted and position\n");
	scanf("%d%d",&n,&pos);
	for(i=3;i>=pos;i--)
	{arr[i+1]=arr[i];
	}
	arr[pos]=n;
	printf("\n");
	for(j=0;j<4;j++)
	{printf("%d\n",arr[j]);
	}
getch();
return 0;
}
