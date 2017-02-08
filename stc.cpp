#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
void reverse(char* c,int n)
{
stack<char>s;
for(int i=0;i<n;i++)
{s.push(c[i]);
}
for(int i=0;i<n;i++)
{c[i]=s.top();
s.pop();
}
}
int main()
{char c[51];
cout<<"enter name"<<endl;
cin>>c;
int n=strlen(c);
reverse(c,n);
cout<<c<<endl;
return 0;
}
