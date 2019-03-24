#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,p,r,n=0,i=1,k,l=0;
    scanf("%d%d",&a,&b);
    p=a*b;
    while(p)
    {
        r=c%2;
        n=n+(i*r);
        i=i*10;
        p=p/2;
    }
    while(n)
    {
        k=n%10;
        l++;
        if(k==1)
        {
        printf("%d",l);
        break;
        }
        else
        n=n/10;
    }
}
