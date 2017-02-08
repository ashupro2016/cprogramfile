#include<stdio.h>
#include<conio.h>
int main()
{
	char *names[]={
	"akshay",
	"parag",
	"raman",
	"srinivas",
	"gopal",
	"rajesh"};
	char *temp;
	printf("original :%s %s\n",names[2],names[3]);
temp=names[2];
names[2]=names[3];
names[3]=temp;
printf("new :%s %s\n",names[2],names[3]);
getch();
return 0;
}
