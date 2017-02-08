#include<iostream.h>
int main()
{
	char str[30];
	int m1,m2,m3,avg;
	cout<<"enter your name:";
	cin>>str;
	cout<<"enter marks in three subjects:";
	cin>>m1>>m2>>m3;
	avg=(m1+m2+m3)/3;
	cout<<"your name is"<<str;
	cout<<endl<<"and average marks in subject are"<<avg;
	return 0;
	
}
