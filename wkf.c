#include<stdio.h>
#include<conio.h>
struct book
{
	char name[15];
	char author[15];
	int rollno;
};
void display(struct book*);
int main()
{struct book b1={"c programming","ashutosh kr",007};
display(&b1);
getch();
return 0;
}
void display(struct book *ptr)
{
	printf("%s\t%s\t%d\n",ptr->name,ptr->author,ptr->rollno);
}
