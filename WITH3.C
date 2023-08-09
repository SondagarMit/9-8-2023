#include<stdio.h>
#include<conio.h>
int sum();

void main()
{
   int total;
   clrscr();

   total=sum();
   printf("%d",total);

   getch();
}
int sum()
{
  int a,b,ans;
  printf("Enter Your Value: ");
  scanf("%d%d",&a,&b);
  ans=a+b;

  return ans;


}