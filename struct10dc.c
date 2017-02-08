#include<stdio.h>
#include<conio.h>
struct enginepart
{char serialnum[3];
int yom;
char material[10];
int qty;
};

int main()
{struct enginepart e[54]={{"AA0",2010,"rubber",100},
{"AA1",2010,"rubber",100},
{"AA2",2010,"rubber",100},
{"AA3",2010,"rubber",100},
{"AA4",2010,"rubber",100},
{"AA5",2010,"rubber",100},
{"AA6",2010,"rubber",100},
{"AA7",2010,"rubber",100},
{"AA8",2010,"rubber",100},
{"AA9",2010,"rubber",100},
{"BB0",2011,"rubber",100},
{"BB1",2011,"rubber",100},
{"BB2",2011,"rubber",100},
{"BB3",2011,"rubber",100},
{"BB4",2011,"rubber",100},
{"BB5",2011,"rubber",100},
{"BB6",2011,"rubber",100},
{"BB7",2011,"rubber",100},
{"BB8",2011,"rubber",100},
{"BB9",2011,"rubber",100},
{"CC0",2012,"rubber",100},
{"CC1",2012,"rubber",100},
{"CC2",2012,"rubber",100},
{"CC3",2012,"rubber",100},
{"CC4",2012,"rubber",100},
{"CC5",2012,"rubber",100},
{"CC6",2012,"rubber",100},
{"CC7",2012,"rubber",100},
{"CC8",2012,"rubber",100},
{"CC9",2012,"rubber",100},
{"DD0",2013,"rubber",100},
{"DD1",2013,"rubber",100},
{"DD2",2013,"rubber",100},
{"DD3",2013,"rubber",100},
{"DD4",2013,"rubber",100},
{"DD5",2013,"rubber",100},
{"DD6",2013,"rubber",100},
{"DD7",2013,"rubber",100},
{"DD8",2013,"rubber",100},
{"DD9",2013,"rubber",100},
{"EE0",2014,"rubber",100},
{"EE1",2014,"rubber",100},
{"EE2",2014,"rubber",100},
{"EE3",2014,"rubber",100},
{"EE4",2014,"rubber",100},
{"EE5",2014,"rubber",100},
{"EE6",2014,"rubber",100},
{"EE7",2014,"rubber",100},
{"EE8",2014,"rubber",100},
{"EE9",2014,"rubber",100},
{"FF0",2015,"rubber",100},
{"FF1",2015,"rubber",100},
{"FF2",2015,"rubber",100},
{"FF3",2015,"rubber",100},
{"FF4",2015,"rubber",100},
{"FF5",2015,"rubber",100},
{"FF6",2015,"rubber",100},
{"FF7",2015,"rubber",100},
{"FF8",2015,"rubber",100},
{"FF9",2015,"rubber",100},
};
int i;
for(i=11;i<=26;i++)
{printf("%s\t%d\t%s\t%d\n",e[i].serialnum,e[i].yom,e[i].material,e[i].qty);
}
	getch();
	return 0;
}
