#include <stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],i,m=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=m*a[i];
    }
    if(m%2==0)
    {
        printf("even ");
    }
    else
    {
        printf("odd ");
    }
    
    getch();
}
