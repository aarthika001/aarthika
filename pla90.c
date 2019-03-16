#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,p=0,f=1,f1=1,c,i,f2=1;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    for(i=1;i<=b;i++)
    {
        f1=f1*i;
    }
    p=a-b;
    for(i=1;i<=p;i++)
    {
        f2=f2*i;
    }
    c=f/(f1*f2);
    printf("%d",c);
}
