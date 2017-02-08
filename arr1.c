#include<stdio.h>
#include<conio.h>
#define MAX 10
int main()
{
int arr[MAX];
int num,i;
int sum=0;
int negsum=0;
int possum=0;
float average=0;
printf("ENter number of elements\n");
scanf("%d",&num);
for(i=0;i<num;i++)
{
	scanf("%d",&arr[i]);
	
	
}
printf("ur entered number");
for(i=0;i<num;i++)
{
printf("%d\n",arr[i]);
}
for(i=0;i<num;i++)
{if(arr[i]<0)
{negsum=negsum+arr[i];
}
else if(arr[i]>0)
{possum=possum+arr[i];
}


else if(arr[i]==0)
{
}
sum=sum+arr[i];
}
printf("sum is %d\n",sum);
average=sum/num;
printf("average is %f\n",average);
printf("neg number is %d\n",negsum);
printf("pos sum is %d\n",possum);
return 0;
}

