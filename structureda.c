#include<stdio.h>
#include<conio.h>
struct student{
int rollno;
char name[20];
char departmnt[20];
char course[20];
int yoj;
};
int main()
{struct student s[4];
int i;
for(i=0;i<4;i++)
{printf("enter rollno\n");
scnaf("%d",&s[i].rollno);
printf("enter name\n");
scnaf("%s",&s[i].name);
printf("enter departmnt\n");
scnaf("%s",&s[i].departmnt);
printf("enter course\n");
scnaf("%s",&s[i].course);
printf("enter yoj\n");
scnaf("%d",&s[i].yoj);
}

displayyear(s);
displaydata(s);
getch();
return 0;
	
}
void displayyear(struct student *s)
{int i,year;
printf("enter year");
scanf("%d",&year);
for(i=0;i<4;i++)
{if(year==s[i].yoj)
printf("%s\n",s[i].name);

else
printf("wrong rollno\n");
}
}
void displaydata(struct student *p)
{int i,roll;
printf("enter year");
scanf("%d",&roll);
for(i=0;i<4;i++)
{if(roll==p[i].rollno);
{

printf("%s\n",p[i].name);
printf("%d\n",p[i].rollno);
printf("%s\n",p[i].departmnt);
printf("%s\n",p[i].course);
printf("%s\n",p[i].yoj);
}
}
}
