#include<stdio.h>
#include<conio.h>
#include<string.h>
void replace();
int main()
{
char *str[]={
"we will teach you how to...",
"Move a mountain",
"Level a building",
"Erase the past",
"Make a Million",
"...all through c !"};

char str1[80],str2[80];
int i;
printf("\n");
for(i=0;i<6;i++)
{
	printf("\t%s\n",*(str+i));
 }
 printf("\n");
 printf("enter word to search\n");
 gets(str1);
 printf("enter word to replace\n");
 gets(str2);
 printf("\n before modification\n\n");
 for(i=0;i<6;i++)
 {printf("\t%s\n",*(str+i));
  } 
	
printf("\n after modification\n\n");
for(i=0;i<6;i++)
{replace(*(str+i),str1,str2);

}
getch();
}
void replace(char *s, char s1[80], char s2[80]) {

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
//printf("%s",temp2);

if(strcmpi(temp2,s1)==0) {

strcpy(temp2,s2);

}

j=0;

while(temp2[j]!='\0') {

main[k]=temp2[j];

k++;
j++;
}

main[k]=' ';  /* adding space after each word is copied */

k++;     /* increment so that the next word won't replace the space */

j=-1;

}

i++;
j++;
}

temp2[j]='\0';              /* last word terminated */

if(strcmpi(temp2,s1)==0){    /* checking last word too */

strcpy(temp2,s2);

}

/***************************/
/* last word of the string */
/***************************/

j=0;

while(temp2[j]!='\0') {

main[k]=temp2[j];

k++;
j++;
}

main[k]='\0';   /* new string is completely ready */

printf("\t%s\n",main);       /* printing the new string */

}

