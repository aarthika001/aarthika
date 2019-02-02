#include <iostream>
#include <conio.h>

int main()
{
    int n,t,r,s=0;
    scanf("%d",&n);
    t=n;
    while(t)
    {
        r=t%10;
        s=s+r*r*r;
        t=t/10;
    }
if(n==s)
{
    printf("armstrong");
    
}
else
{
    printf("not armstrong");
}
getch();
    return 0;
}
