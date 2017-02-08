#include<stdio.h>
#include<conio.h>
#define N 4

struct students {
  int rlnm;
  char name[25];
  char dept[25];  /* structure defined outside of main(); */
  char course[25];
  int year;
  };

void main() {           /* main() */

struct students s[N];
int i,ch;

//clrscr();


/* taking input of 450 students in an array of structure */

for(i=0;i<N;i++) {

printf("  Enter data of student %d\t\t\t\ttotal students: %d\n",i+1,N);
printf("****************************\n\n");

printf("enter rollnumber:  ");
scanf("%d",&s[i].rlnm);

printf("\n\nenter name:  ");
scanf(" %s",&s[i].name);

printf("\n\nenter department:  ");
scanf("%s",&s[i].dept);

printf("\n\nenter course:  ");
scanf("%s",&s[i].course);

printf("\n\nenter year of joining:  ");
scanf("%d",&s[i].year);

//clrscr();

}

  /* displaying a menu */

printf("\n\tenter your choice: \n");
printf("\t**********************\n\n");

printf("1: enter year to search all students who took admission in that:\n\n");
printf("2: enter roll number to see details of that student\n\n\n");

printf("your choice:  ");     /* taking input of your choice */
scanf("%d",&ch);

//clrscr();

switch(ch) {

case 1:
 //    clrscr();

     dispyr(&s);  /* function call to display names of students who joined in\
       a particular year */

     break;

case 2:
   //  clrscr();

     disprl(&s);    /* function call to display information of a student \
         whose roll number is given */

     break;

default:

     printf("\n\nerror! wrong choice");

}

getch();

}
/******************* main() ends **************/

dispyr(struct students *a) {   /* function for displaying names of students\
        who took admission in a particular year */

int j,yr;

printf("\nenter year:  ");
scanf("%d",&yr);

printf("\n\nthese students joined in %d\n\n",yr);

for(j=0;j<N;j++) {

if(a[j].year==yr)  {

printf("\n%s\n",a[j].name);
}

}
return 0;
}


disprl(struct students *a) {        /* function to print information of a\
         student whose roll number has been \
         given. */

int k,rl;

printf("\nenter roll number: ");
scanf("%d",&rl);

for(k=0;k<N;k++)  {

if(a[k].rlnm==rl) {

printf("\n\n\t Details of roll number: %d\n",a[k].rlnm);
printf("\t***************************\n\n");
printf("           Name: %s\n",a[k].name);
printf("     Department: %s\n",a[k].dept);
printf("         Course: %s\n",a[k].course);
printf("Year of joining: %d",a[k].year);

break;
}

else {
printf("\nRoll number you entered does not exist\n\n");

break;
}

 }

return 0;
}

