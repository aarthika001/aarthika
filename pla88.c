#include<stdio.h>
#include<conio.h>
void main()
{
    long int n,p;
    float t;
    scanf("%ld %ld",&n,&p);
    if(n>=1 && n<=1000)
    {
        t=n>>p;
    printf("%.1",t);
    }
}
