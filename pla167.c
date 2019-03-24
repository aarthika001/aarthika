#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
   int i,l=0,f=0;
   scanf("%[^\n]",a);
  for(i=0;a[i]!='\0';i++)
  {
  l++;
  }
   for(i=2;i<=l/2;i++)
   {
       if(l%i==0)
       {
           f++;
           break;
       }}
     
   if(f==0)
   printf("yes");
   else
   printf("no");
}
