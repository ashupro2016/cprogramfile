#include<stdio.h>
#include<conio.h>
#include<string.h>
void replace();
int main()
{
	char *str[]={
 "We will teach you know to...",
 "Move a mountain",
 "level a mountain",
 "erase the past",
 "make a million",
 "all through C!"};
 char str1[80],str2[80];
 int i;
printf("\n entered string\n\n");
for(i=0;i<6;i++)
{
	
printf("%s\n",*(str+i));
}
printf("string to be matched\n");
gets(str1);
printf("string to be replaced\n");
gets(str2);
printf("pass ur string  to function\n");
for(i=0;i<6;i++)
{replace(*(str+i),str1,str2);
}
getch();
return 0;
}
void replace(char* s,char s1[80],char s2[80])
{char temp[80],temp2[80],main[80];
char *t=temp;
int i=0,j=0,k=0;
while(*s!='\0')
{*t=*s;
t++;
s++;
}
*t='\0';
	
	while(temp[i]!='\0')
	{temp2[j]=temp[i];
	if(temp[i]==' ')
	{temp2[j]='\0';
	if(strcmpi(temp2,s1)==0)
	{strcpy(temp2,s2);
	}
	
	j=0;
	while(temp2[j]!='\0')
	{main[k]=temp2[j];
	j++;
	k++;
	}
	main[k]=' ';
	k++;
	j=-1;
	}
	i++;
	j++;
	
}
	
	temp2[j]='\0';
	if(strcmpi(temp2,s1)==0)
	{strcpy(temp2,s2);
	}
	j=0;
	while(temp2[j]!='\0')
	{main[k]=temp2[j];
	k++;
	j++;
	}
	main[k]='\0';
	printf("%s\n",main);
}
