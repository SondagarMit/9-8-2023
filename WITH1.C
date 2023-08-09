#include<stdio.h>
#include<conio.h>
void sum(int,int);
void main()
{
  int a,b;
  clrscr();

  printf("Enter Your 2 Value: ");
  scanf("%d%d",&a,&b);
  sum(a,b);


  getch();


}

void sum(int a,int b)
{

 int ans;

 ans=a+b;
 printf("%d",ans);

}