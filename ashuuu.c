#include<stdio.h>
#include<conio.h>
#include<string.h>

void replace();

void main() {

char str[80],str1[]="the";
//clrscr();

gets(str);

replace(str,str1);

getch();

}
void replace(char *s, char s1[80]) {

int i=0,j=0,k=0;
char temp[100],temp2[100],main[100],*t=temp;


/* copying to temporary string */

while(*s!='\0') {

*t=*s;

t++;
s++;

}

*t='\0';

/**********************/
/* checking each word */
/**********************/


while(temp[i]!='\0') {

temp2[j]=temp[i];

if(temp[i]==' ') {

temp2[j]='\0';

if(strcmpi(temp2,s1)==0) {

}

else {
j=0;

while(temp2[j]!='\0') {

main[k]=temp2[j];

k++;j++;
}

main[k]=' ';  /* adding space after each word is copied */

k++;     /* increment so that the next word won't replace the space */
}
j=-1;

}

i++;
j++;
}

temp2[j]='\0';              /* last word terminated */

if(strcmpi(temp2,s1)==0){    /* checking last word too */

}

/***************************/
/* last word of the string */
/***************************/

else {

j=0;

while(temp2[j]!='\0') {

main[k]=temp2[j];

k++;
j++;
}

main[k]='\0';   /* new string is completely ready */

}
printf("%s\n",main);       /* printing the new string */

}
