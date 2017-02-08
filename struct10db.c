#include<stdio.h>
#include<conio.h>

struct customer
{int accountnum;
char name[20];
float balance;
};
void custome(struct customer*);
void withdraw(struct customer*);
int main()
{
	struct customer c[4];
	int i;
	for(i=0;i<4;i++)
	{printf("enter account number\n");
	scanf("%d",&c[i].accountnum);
	printf("enter name\n");
	scanf("%s",&c[i].name);
	printf("enter balance\n");
	scanf("%f",&c[i].balance);
	}
	for(i=0;i<4;i++)
	{printf("%d",c[i].accountnum);
	printf("%s",c[i].name);
	printf("%f",c[i].balance);
	printf("\n\n");
	}
custome(c);
withdraw(c);
getch();
return 0;
}
void custome(struct customer *p)
{int i;
for(i=0;i<4;i++)
{if(p[i].balance<100)
{printf("%d\n",p[i].accountnum);
printf("%s\n",p[i].name);
}
}
}
void withdraw(struct customer *q)
{
	int accountno,code,i;
	float amount;
	printf("enter account number\n");
	scanf("%d",&accountno);
	for(i=0;i<4;i++)
	{if(accountno==q[i].accountnum)
	{printf("enter amount\n");
	scanf("%f",&amount);
	if(amount<q[i].balance)
	{printf("enter code 0 or 1\n");
	scanf("%d",&code);
	switch(code)
	{case 0:
		q[i].balance+=amount;
		printf("deposit %f\n",q[i].balance);
		break;
	case 1:
		q[i].balance-=amount;
	    printf("withdrawl %f\n",q[i].balance);
	    break;
	    default:
	    	printf("wrong option\n");
	}
	}
	else
	printf("amount is more than balance\n");
	}
	
	}
	
}

