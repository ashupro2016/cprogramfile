#include<stdio.h>
#include<conio.h>
#include<String.h>
int main()
{
	char *s[]={
	"To err is human...",
	"But to really mess things up..",
	"one needs to know C!!"};
	char temp[80];
	int i;
	for(i=0;i<3;i++)
	{
		printf("%s\n",*(s+i));
		
	}
	for(i=0;i<3;i++)
	{
	
	reverse(*(s+i),temp);
}
	getch();
	return 0;
	
}
void reverse(char *t,char tar[80])
{
	int i=0;
    int len;
	while(*t!='\0')
	{
		tar[i]=*t;
	    i++;
	    t++;
	}
  tar[i]='\0';
  len=strlen(tar);
  printf("%d\n",len);
  for(i=len;i>=0;i--)
  {printf("%c",tar[i]);
  }
  printf("\n");
  
//printf("%s\n",tar);
  /*len=strlen(tar);
  for(i=len-1;i>=0;i++)
  {
  	printf("%c",tar[i]);
  }
  */
}
