#include<iostream>
using namespace std;
class stack
{
private:
char A[101];
int top;
public:
void push_head(int x);
void pop_head();
int top();
bool isempty();
}
void reverse(char *c,int x)
{
}
int main()
{char c[51];
printf("enter string\n");
gets(c);
reverse(c,strlen(c));
printf("output =%s",c);
}
