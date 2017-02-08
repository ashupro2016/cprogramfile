#include<stdio.h>
#include<conio.h>

void swap(int *x,int *y)
{int t=*x;
*x=*y;
*y=t;
	
}
void selectionsort(int arr[n],int n)
{
	int i,j,min;
	for(i=0;i<n;i++)
	{	min=i;
		for(j=i+1;j<n;j++)
		{if(arr[j]<arr[min])
		min=j;
		}
		swap(&arr[i],&arr[min]);
	}
}

void printarray(int arr[],int n)
{int i;
for(i=0;i<n;i++)
{
	printf("%d ",arr[i]);
}
printf(\n);

}
int main()
{int n;
printf("enter number\n");
scanf("%d",&n); 
int arr[n];
for(i=0;i<n;i++)
{scanf("%d",&arr[i]);
}
selectionsort(arr,n);
printarray(arr,n);
printf("sorted array\n");
printarray(arr,n);
getch();
return 0;
}

