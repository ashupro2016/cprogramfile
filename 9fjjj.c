#include<stdio.h>
#include<conio.h>
void main() {

char a[10000],i=0,suc=0;
//clrscr();

printf("enter the line of text (string): \n\n");

gets(a);


printf("\n\n\n\ntwo vowels in succesion are: \n\n");

while(a[i]!='\0') {

if(a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'||a[i]=='u' ) {

if(a[i+1]=='a'|| a[i+1]=='e'|| a[i+1]=='i'|| a[i+1]=='o'|| a[i+1]=='u') {

suc++;
printf("%c%c  ",a[i],a[i+1]);
}
}
i++;
}

printf("\n\n\noccurence of two vowels in succesion = %2d ",suc);


getch();
}

