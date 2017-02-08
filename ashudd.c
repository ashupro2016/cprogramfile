#include<stdio.h>
#include<conio.h>
int i = 200, n = 110;
main(){
	int count=0;
  while (i >= n){
    i = i-1;
    n = n+1;
    count++;
  }
  printf("%d\n",count);
  getch();
  return 0;
}
