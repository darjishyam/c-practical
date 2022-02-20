#include<stdio.h>
#include<conio.h>
void main()
{
   long int p,r,n,i;
   clrscr();
   printf("Enter value & p,r,n");
   scanf("%ld%ld%ld",&p,&r,&n);
   i=p*r*n/100;
   printf("Area of interest=%ld",i);

   getch();

}