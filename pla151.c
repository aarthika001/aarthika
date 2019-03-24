#include<stdio.h>
#include<conio.h>
void main() 
{
   char a[100];
   int i,l=0,c=0;
   scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
  l++;
  }
   for(i=0;i<l;i++)
   {
       if((a[i]!='a')&&(a[i]!='b'))
       {
           c++;
           break;
       }
   }
   if(c!=0)
   printf("no");
   else
   printf("yes");
}
