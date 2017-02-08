#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,temp;
int a[6]={23,54,11,6,2,1};
for(i=0;i<6;i++)
{for(j=0;j<6-i-1;j++)
if(a[j]>a[j+1])
{	temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;

}
printf("%d\t",a[i]);


}
getch();
return 0;

}


