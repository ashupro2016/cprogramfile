#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char name[7][20]={"ashu",
	                  "ashish",
	                  "anu",
	                  "kajal",
	                  "aditya",
	                  "priyanjali",
	                  "vikas"
					  };
	char nam[20];
   int i,j,k;
   j=0;
 	printf("enter name\n");
 	scanf("%s",nam);
 	for(i=0;i<7;i++)
 	{k=strcmp(name[i][20],nam);
 	if(k==0)
 	{j++;
 	printf("u can enter now\n");
 	break;
	 }
	 else
	 {
	 
	 if(j==0)
	 {printf("u cannot enter inside\n");
	 }
 }
	 }
}
