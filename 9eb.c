#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char name[10][10];
char t1[20],t2[20];
int i,j;
printf("enter 10 name\n");
for(i=0;i<10;i++)
{scanf("%s",name[i]);
}
printf("entered unorder name are: \n\n\n");
for(i=0;i<10;i++)
{printf("%s\n",name[i]);
}
for(i=0;i<10;i++)
for(j=i+1;j<10;j++)
{
	if(name[i][0]>name[j][0])
	{strcpy(t1,name[i]);
	strcpy(t2,name[j]);
	strcpy(name[i],t2);
	strcpy(name[j],t1);
	}
}
printf("entered order name are: \n\n\n");
for(i=0;i<10;i++)
{printf("%s\n",name[i]);
}

getch();
return 0;
}
