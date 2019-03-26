#include <stdio.h>
#include<conio.h>
void main()
{
   int a,b,m,binary=0,r,r1,p=1,c=0;
   scanf("%d %d",&a,&b);
   m=a^b;
   while(m)
   {
       r=m%2;
       binary=binary+r*p;
       m=m/2;
       p=p*10;
   }
   while(binary)
   {
       r1=binary%10;
       if(r1==1)
       {
           c++;
       }
       binary=binary/10;
   }
   printf("%d",c);
}
