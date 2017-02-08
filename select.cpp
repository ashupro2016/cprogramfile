#include<stdio.h>
#include<conio.h>

void swap(int *x,int *y)
{int t=*x;
*x=*y;
*y=t;

}
void selectionsort(int arr[],int start,int n)
{
	if(start>=n-1)
        return;

	int j,min;
	{	min=start;
		for(j=1+start;j<n;j++)
		{if(arr[j]<arr[min])
		min=j;
		}
		swap(&arr[j],&arr[min]);

	}
	void selectionsort(arr[],start+1,n);
}

void printarray(int arr[],int n)
{int i;
for(i=0;i<n;i++)
{
	printf("%d ",arr[i]);
}
printf("\n");

}
int main()
{int n,i,start;
start=0;
printf("enter number\n");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{scanf("%d",&arr[i]);
}
selectionsort(arr,n);
printarray(arr,n);
printf("sorted array\n");
printarray(arr,start,n);
getch();
return 0;
}
