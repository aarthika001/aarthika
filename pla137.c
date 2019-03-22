#include<stdio.h>
#include<conio.h>
void main()
{
    int n,b[100],l=0,i=1,r;
    scanf("%d",&n);
    while(n)
    {
       b[l]=n%2;
       l++;
        n=n/2;
    }
    for(i=0;i<l;i++)
    {
    if(b[i]==1)
    {
    printf("%d",i+1);
    break;
    }
    }   
}
