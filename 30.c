#include<stdio.h>

void main()
{
    int hr,hr1,min,min1,m,n;
    scanf("%d%d%d%d",&hr,&min,&hr1,&min1);
    if(hr>hr1)
    n=hr-hr1;
    else
    n=hr1-hr;
    if(min>min1)
    m=min-min1;
    else
    m=min1-min;
    printf("%d %d",n,m);
    getch();
}
