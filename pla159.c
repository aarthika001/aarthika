#include <stdio.h>
#include<conio.h>
void main()
{
    int n,m,bin=0,rem,c=0,rem2,pow=1,p;
    scanf("%d %d",&n,&m);
    p=n*m;
    while(p)
    {
        rem=p%2;
        bin=bin+rem*pow;
        p=p/2;
        pow=pow*10;
    }
    
    while(bin>0)
    {
        rem2=bin%10;
        if(rem2==1)
        {
            c++;
        }
        bin=bin/10;
    }
    printf("%d",c);
}
