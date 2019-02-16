#include<stdio.h>
#include<conio.h>
Void main()
{
    int m;
clrscr();
    scanf("%d",&m);
    if(m%2==0)
    {
        m=m/2;
        printf("%d",m);
    }
    else
    {
        printf("%d",m);
    }
getch();
}
