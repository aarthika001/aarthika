#include<stdio.h>
#include<conio.h>
void main()
{
   int n,P,K,i,j=0,r=0,c[100],a=0,r=0,b[100];
   scanf("%d",&n);
   scanf("%d%d",&P,&K);
   a=P+K;
   while(n)
   {
       r=a%10;
       c[j]=r;
       n=n/10;
       j++;
   }
   for(i=j-1;i>=0;i--)
   {
       b[r]=c[i];
       r++;
   }
   for(i=a-1;i<a;i++)
   {
   printf("%d",b[i]);
   }
}
