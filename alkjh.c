#include<stdio.h>
#include<conio.h>
struct ashu{
	int a;
	char c;
	float s;
};
int main()
{struct ashu as;
printf("%u\t%u\t%u\n",&as.a,&as.c,&as.s);
getch();
return 0;
}

