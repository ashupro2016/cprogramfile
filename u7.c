#include<stdio.h>
#include<conio.h>
struct s 
{int i;
struct s *p; 
};
int main()
{struct s vari,var2;
vari.i=100;
var2.i=200;
vari.p=&vari;
var2.p=&var2;
printf("%d\t%d\n",vari.p->i,var2.p->i);
getch();
return 0;
}


