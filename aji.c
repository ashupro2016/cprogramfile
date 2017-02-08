#include<stdio.h>
#include<conio.h>
#include<string.h>
void main() {

char a[10][10];
char t1[10],t2[10];
int i,j;
//clrscr();

printf("\nUnsorted list: \n\n");

for(i=0;i<10;i++) {

scanf("%s",a[i]);

}

printf("\n\n");


/* sorting list */
/****************/

for(i=0;i<10;i++) {

for(j=i+1;j<10;j++) {

if(a[i][0]>a[j][0]) {     /* testing only first alphabet of each name */

strcpy(t1,a[i]);         /* copying both in two temporary strings */
strcpy(t2,a[j]);

strcpy((a[i]),t2);       /* replacing both from temporary strings */
strcpy(a[j],t1);

}
}
}

/* sorted list */
/***************/

printf("\n\nSorted list: \n\n");

for(i=0;i<10;i++) {

printf("\n%s\n",a[i]);

}

getch();

}

