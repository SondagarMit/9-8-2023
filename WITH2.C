#include<stdio.h>
#include<conio.h>
void circlearea(int, float);

void main()
{
   int r;
   float pi = 3.14;
   clrscr();

   printf("Enter Your Area: ");
   scanf("%d",&r);
   circlearea(r,3.14);


   getch();

}
void circlearea(int r, float pi)
{
 float ans;

 ans=r*r*pi;

 printf("%f",ans);


}