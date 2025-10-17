#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],b[50],c[100],i,m,n,k;
printf("Enter the first array:\n");
scanf("%d",&m);
for(i=0;i<m;i++)
{
 scanf("%d",&a[i]);
 c[i]=a[i];
}
k=i;
printf("Enter the Second array:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 c[k]=a[i];
 k++;
}
printf("The Merging Array:\n");
for(i=0;i<k;i++)
{
 printf("%d",c[i]);
}
getch();
}
