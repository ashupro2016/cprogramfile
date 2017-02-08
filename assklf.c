#include<stdio.h>
#include<conio.h>

int main()
{struct book
{char name[25];
char author[25];
int callno;
};
struct book b1={"let us c","ashutosh kumar",101};
struct book *ptr;
ptr=&b1;
printf("%s\t%s\t%d\n",b1.name,b1.author,b1.callno);
printf("%s\t%s\t%d\n",ptr->name,ptr->author,ptr->callno);
getch();
return 0;
}
