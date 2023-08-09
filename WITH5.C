#include<stdio.h>
#include<conio.h>
int sum(int, int);

void main()
{
 int a,b,ans;
 clrscr();
 printf("Enter Yuor 2 Value: ");
 scanf("%d%d",&a,&b);

 ans=sum(a,b);

 printf("Ans is = %d",ans);
 getch();
}

int sum(int p,int q)
{
 int ans;
 ans=p+q;

 return ans;

}

