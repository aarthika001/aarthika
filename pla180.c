#include<stdio.h>
#include<conio.h>
void main()
{
    int n,d=0,b=1,rem;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        d=d+rem*b;
        n=n/10;
        b=b*2;
    }
    b=2;
    while(b)
    {
    if(d<b)
        {
            printf("%d",b);
            break;
        }
    if(d>b)
        {
            b=b*2;
            printf("%d",b);
            break;
        }
    }
   
}
