#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
 int set1[30],set2[30],s1,s2,uni[30],inter[30],diff[30],i,ch;
 clrscr();
 printf("Enter no.ofelements in 1st set:");
 scanf("%d",&s1);
 printf("Enter elements in 1st set (only Os&1s):");
 for(i=0;i<s1;i++)
 {
  scanf("%d",&set1[i]);
 }
 printf("\nEnter no.of element in 2nd set:");
 scanf("%d",&s2);
 printf("Enter elements in 2nd set(only Os&1s):");
 for(i=0;i<s2;i++)
 {
 scanf("%d",&set2[i]);
 }
 printf("\n 1.Union");
 printf("\n 2.Intersection");
 printf("\n 3.Difference");
 printf("\n 4.Exit");
 while(1)
 {
 printf("\n Enter Choice:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:// Union
       if(s1==s2)
       {
	printf("\n Element after union opertion:");
	for(i=0;i<s1;i++)
	{
	uni[i]=set1[i]|set2[i];
	printf("%d",uni[i]);
	}
       }
       else
       {
	printf("set union not possible as sets as of different size\n");
       }
   break;
    case 2:// Intersection
    if(s1==s2)
    {
     printf("\nElement after Intersection opertion:");
     for(i=0;i<s1;i++)
     {
      inter[i]=set1[i]&set2[i];
      printf("%d",inter[i]);
      }
     }
     else
     {
     printf("set intersection not possible as sets are of different size\n");
     }
     break;
   case 3://Difference
	 if(s1==s2)
	 {
	 printf("\nElement after difference opertion:");
	 for(i=0;i<s1;i++)
	 {
	  diff[i]=set1[i]&~set2[i];
	  printf("%d",diff[i]);
	  }
	 }
	 else
	 {
	  printf("set different not possible as sets are of different size\n");
	 }
	break;
     case 4:
	  exit(0);
	 break;
	default:
	printf("\n Wrong choice,please select a valid choice");
	break;
	}
       }
     }
