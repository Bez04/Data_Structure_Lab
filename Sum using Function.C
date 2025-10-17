#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
int a,b,sum;
clrscr();
printf("Enter The First Number:");
scanf("%d",&a);
printf("Enter The Second Number:");
scanf("%d",&b);
sum=add(a,b);
printf("The sum is %d ",sum);
getch();
}
int add(int x,int y)
{
 return(x+y);
}
