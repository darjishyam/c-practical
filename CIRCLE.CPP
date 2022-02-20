#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
  int r;
  float cir;
  clrscr();
  printf("Enter value r");
  scanf("%d",&r);
  cir=pi*r*r;
  printf("Area of circle=%f",cir);

  getch();

}