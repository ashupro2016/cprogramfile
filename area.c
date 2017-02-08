#include<stdio.h>
#include<conio.h>
int main()
{
	float r,a;
	const float pi=3.14;
	printf("enter radius of circle\n");
	scanf("%f",&r);
	a=pi*r*r;
	printf("area of circle is %f\n",a);
	getch();
	return 0;
}
