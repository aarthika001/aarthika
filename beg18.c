#include <iostream>
#include <conio.h>

int main()
{
    int a,b,t,r,s=0,i;
    scanf("%d%d",&a,&b);

    for(i=a;i<b;i++)
    {
t=i;
    while(t)
    {
        r=t%10;
        s=s+r*r*r;
        t=t/10;
    }
if(s==i)
{
    printf("%d",i);
    
}
}


    return 0;
}
