#include <stdio.h>
#include<conio.h>
void main()
{
    int i,j,k=0,l,m=1,n;
    printf("Input :\n");
    scanf("%d",&n);
    printf("Output :\n");
    while(n)
    {
        m=m*2;
        if(m==n)
        {
            printf("yes");
            k=1;
        }
        if(m>n)
        n=0;
    }
    if(k==0)
    printf("no");
}
