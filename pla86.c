#include <stdio.h>
#include<conio.h>
void main()
{
   int a[100],n,i,j,c;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   c=a[0];
   for(i=1;i<n;i++)
   {
       j=a[i];
       c=c^j;
   }
   printf("%d",c);
}
