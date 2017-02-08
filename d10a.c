#include<stdio.h>
#include<conio.h>
struct student
{int rollno;
char name[20];
char department[20];
char course[20];
int yoj;
};
void displayname(struct student*);
void displaydata(struct student*);
int main()
{struct student s[4];
int i,ch;
for(i=0;i<4;i++)
{printf("enter rollno\n");
scanf("%d",&s[i].rollno);
printf("enter name\n");
scanf("%s",&s[i].name);
printf("enter department\n");
scanf("%s",&s[i].department);
printf("enter course\n");
scanf("%s",&s[i].course);
printf("enter year of joining\n");
scanf("%d",&s[i].yoj);
}
for(i=0;i<4;i++)
{
printf("%d\n",s[i].rollno);
printf("%s\n",s[i].name);
printf("%s\n",s[i].department);
printf("%s\n",s[i].course);
printf("%d\n",s[i].yoj);

}
printf("enter choice\n");
scanf("%d",&ch);
switch(ch)
{case 1:
	displayname(s);
	break;
	case 2:
	displaydata(s);
break;
default:
	printf("wrong choice\n");

}
getch();
return 0;
}
void displayname(struct student *p)
{int i,year;
printf("enter year\n");
scanf("%d",&year);
for(i=0;i<4;i++)
{if(p[i].yoj==year)
{printf("%s\n",p[i].name);
}	
}
	
}
void displaydata(struct student *q)
{
	int i,roll;
	printf("enter rollno");
	scanf("%d",&roll);
	for(i=0;i<4;i++)
	{
	
	if(q[i].rollno==roll)
	{printf("%d\n",q[i].rollno);
printf("%s\n",q[i].name);
printf("%s\n",q[i].department);
printf("%s\n",q[i].course);
printf("%d\n",q[i].yoj);
	}
}
	
}

