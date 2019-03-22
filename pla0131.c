#include <stdio.h>
#inclide<conio.h>
void main()
{
    int t,r=0,l=0,n;
    scanf("%d",&n);
 while(n)
 {
     r=n%10;
     n=n/10;
     if(r%2==1)
     {
         l=l+r;
     }
     
 }
if(l%2==0)
{
    printf("E");
}
else
{
    printf("O");
}
}
