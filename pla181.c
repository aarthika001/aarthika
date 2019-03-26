#include <stdio.h>
#include<conio.h>
void main()
{
   int a,i,l=0;
   scanf("%d",&a);
   for(i=0;i<=100;i++)
   {
       if(a%3==0 || a%7==0 ||a%(3+7)==0)
        l++;
    }
   if(l>0)
    printf("yes");
    else
    printf("no");
}
