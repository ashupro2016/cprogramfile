#include<stdio.h>
#include<conio.h>
struct library
{int accessnum;
char book[20];
char author[20];
float price;
int flag;
};

int main()
{struct library l[5]={{1,"math","rdshar",50.5,0},
 {2,"eng","ncert",100,1},
 {3,"hin","ncert",120,0},
 {4,"sans","ashu",200,1},
 {5,"geog","akku",250,1}
};
struct library temp;
int i,ch,accno,m=0,j;
char auth[10];
while(1)
{
	printf("enter choice\n");
	printf("1:add book information\n");
	printf("2:display book information\n");
	printf("3:list all books of given author\n");
	printf("4:list the title of specified book\n");
	printf("5:list the count of books in the library\n");
	printf("6:list the books in order of accession number\n");
	printf("7:exit\n");
	printf("enter choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("add book information\n");
			scanf("%d",&accno);
	for(i=0;i<5;i++)
	{if(accno==l[i].accessnum)
     {printf("enter access number\n");
     scanf("%d",&temp.accessnum);
     printf("enter author name\n");
     scanf("%s",&temp.author);
     printf("enter title of book\n");
     scanf("%s",&temp.book);
     printf("enter flag\n");
     scanf("%d",&temp.flag);
		 
		 }
		 
		 
		 	
	}
	l[accno]=temp;
	printf("information added succesfully\n");
	break;
	case 2:
		printf("display book information\n");
		printf("enter access number\n");
		scanf("%d",&accno);
		for(i=0;i<5;i++)
		{if(accno==l[i].accessnum)
		{printf("%d\n",l[i].accessnum);
		printf("%s\n",l[i].book);
		printf("%s\n",l[i].author);
		printf("%f\n",l[i].price);
		if(l[i].flag==0)
		printf("not issued\n");
		else
		printf("book issued\n");
		
		
		}
		
		}
		break;
		case 3:
			printf("enter name of author\n");
      scanf("%s",auth);
	  	for(i=0;i<5;i++)
	  	{
	  		m=strcmpi(auth,l[i].author);
	  		if(m==0)
	  		{printf("%s\n",l[i].author);
			  }
		  }
	break;
	case 4:
	printf("enter accsess number\n");
	scanf("%d",&accno);
	for(i=0;i<5;i++)
	{if(accno==l[i].accessnum)
	{printf("%s\n",l[i].book);
	}
		  }	  
	break;
	case 5:
		for(i=0;i<5;i++)
		{m++;
		}
		printf("%d\n",m);
	break;
	case 6:
		for(i=0;i<5;i++)
		{for(j=i+1;j<5;j++)
		{if(l[i].accessnum>l[j].accessnum)
		{
		temp=l[i];
		l[i]=l[j];
		l[j]=temp;
		}
		}
		}
	for(i=0;i<5;i++)
	{printf("%d\t%s\t%s\t%f\n",l[i].accessnum,l[i].author,l[i].book,l[i].price);
	if(l[i].flag==0)
	printf("not issued\n");
	else
	printf("issued\n");
	}
	break;
	case 7:
		exit(0);
		
	}
	}	
}
linkfloat()
{float a=0,*b;
b=&a;
a=*b;
return 0;
}
