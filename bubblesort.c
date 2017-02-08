#include<stdio.h>
#include<stdbool.h>
#define MAX 10
int list[MAX]={	1,4,5,3,6,7,9,8,0};
void display()
{
int i;
printf("[");
for(i=0;i<MAX;i++)
{
	printf("%d",list[i]);
}
printf("]\n");
}
void bubblesort()
{
	int temp;
	int i,j;
	bool swaped=false;
	for(i=0;i<MAX-1;i++)
	{swaped =false;
	for(j=0;j<MAX-i-1;j++)
	{
		printf("item compared:[%d,%d]",list[j],list[j+1]);
	if(list[j]>list[j+1])
	
	{temp=list[j];
	list[j]=list[j+1];
	list[j+1]=temp;
		swaped=true;
		printf("=>swapped[%d %d]\n",list[j],list[j+1]);
	}
	else{
	printf("=>not swapped\n");
	}
	
	if(!swaped)
	{break;
	}
	printf("iteration %d",(i+1));
	display();
	}	
	
	
	
}


int main()
{printf("input array:");
display();
printf("\n");
bubblesort();
printf("\n output array:");
display();
return 0;
}

	
