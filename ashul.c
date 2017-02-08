#include<stdio.h>
#include<conio.h>

void main() {

char *s[]={"To err is human....",
    "But to really mess up things up...",
    "One needs to know C!!"
    };
int i;

//clrscr();


printf("REVERSED strings\n\n\n\n");
/* reversing and printing all strings */

xstrrev(*s);
printf("%s\n\n",*s);

xstrrev(*(s+1));
printf("%s\n\n",*(s+1));

xstrrev(*(s+2));
printf("%s\n\n",*(s+2));


getch();

}

xstrrev( char *s) {

int i=0;
char target[100],*t=target;

/* taking 'i' to the null position */

while(*s!='\0') {

i++;
s++;

}

/* reversing in temporary target string */

while(i>=0) {

s--;

*t=*s;

t++;
i--;

}

*t='\0';

/* reversing original string */

while(target[i]!='\0') {

*s=target[i];

i++;
s++;

}


return *s;
}
