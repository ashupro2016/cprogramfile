#include<stdio.h>
#include<conio.h>
#include<math.h>
int gcd(int x,int y)
{int t,diff;
	if(x<y)
	{t=x;
	x=y;
	y=t;
	}
	if((x%y)==0)
	return (y);
	else
	{diff=x-y;	
	}
	return gcd(diff,y);
	
}
int main()
{int x,y,g;
printf("enter number\n");
scanf("%d%d",&x,&y);
printf("entered number is\n");
printf("%d %d\n",x,y);
g=gcd(x,y);
printf("gretest common divisor is %d\n",g);
getch();
return 0;
	
}
