#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[80];
	char str1[]="the";
	printf("enter line\n");
	scanf("%[^\n]s",str);
	
	reverse(str,str1);
	getch();
	return 0;
}
void reverse(char *s,char s2[10])
{
	int i=0,j=0,k=0;
	char temp[100],temp2[100],main[100];
	char *l=temp;
	
	while(*s!='\0')
	{*l=*s;
	s++;
	l++;
	}
	*l='\0';
	while(temp[i]!='\0')
	{
		temp2[j]=temp[i];
		if(temp[i]==' ')
	{temp2[j]='\0';
	if(strcmpi(temp2,s2)==0)
	{
	}
	else
	{j=0;
	while(temp2[j]!='\0')
	{
	main[k]=temp2[j];
	k++;
	j++;
}
	
	main[k]=' ';
	k++;
	}
	j=-1;
	}
	i++;
	j++;
}
temp2[j]='\0';
if(strcmpi(temp2,s2)==0)
{
}
else
{j=0;
while(temp2[j]!='\0')
{
	main[k]=temp2[j];
	j++;
	k++;
}
main[k]='\0';
}
printf("%s\n",main);
}
