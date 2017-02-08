#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char names[7][10]={"ashu",
	                    "ashish",
						"anu",
						"vikas",
						"kajal",
						"aditya",
						"priya"    };
int i,j,k=0;
char nam[20];
printf("enter name\n");
scanf("%s",nam);
for(i=0;i<7;i++)
{
	j=strcmp(&names[i][0],nam);
	if(j==0)
	{printf("u can enter bro\n");
	++k;
	break;
	}

}
if(k==0)
{printf("u cant enter bro\n");
}
getch();
return 0;
}
