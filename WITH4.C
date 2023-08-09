#include<stdio.h>
#include<conio.h>
#include<string.h>

int same();
void main()
{
  int i;
  clrscr();

  i= same();
   if(i==0)
   {
     printf("Same");

   }
   else
   {
    printf("Not Same");

   }

  getch();

}
int same()
{
  int i;
  char a[20],b[20];

  printf("2 String: ");
  scanf("%d%d",&a,&b);

  i = strcmp (a,b);

  if (i==0)
  {
      return 0;


  }
  else
  {
    return 1;

  }

}