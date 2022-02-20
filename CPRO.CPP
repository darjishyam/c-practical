#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n;
  char c[25]={'C','P','R','O','G','R','A','M','M','I','N','G'};
  clrscr();
  for(i=0;i<=10;i++)
  {
    for(j=0;j<=i;j++)
    {
      printf("%c",c[j]);
    }
    printf("\n");
  }
  for(i=11;i>=0;i--)
  {
    for(j=0;j<=i;j++)
    {
      printf("%c",c[j]);
    }
    printf("\n");
  }
  getch();
}