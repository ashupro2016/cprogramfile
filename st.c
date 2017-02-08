#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char name[7][10]={"ashu",
	                    "abha",
	                    "ena",
	                    "shriya",
	                    "jyotsana",
	                    "deepali",
	                    "priya",
	                    "deepika",
	                    "anuskha",
	                    "pragati"
	                  };
int i;
char t;
printf("original :%s\t%s\n",&name[2][0],&name[3][0]);
for(i=0;i<10;i++)
{t=&name[2][i];
name[2][i]=name[3][i];
name[3][i]=t;
}
printf("new: %s\t%s\n",&name[2][0],&name[3][0]);
getch();
return 0;
}
