#include<stdio.h>
#include<conio.h>
int main()
{char s[100];
char *a;
a=s;
 char *c="ashutosh kr";
 
 printf("enter name\n");
 scanf("%[^\n]s",a);
printf("%s ",c);
printf("%s\n",a);
 getch();
 return 0;
}
