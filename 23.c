#include<stdio.h>
#include<conio.h>
void  main()
{
    int n,b[10],j,m;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    m=b[0];
    for(j=1;j<n;j++)
    {
        if(b[j]<m)
        {
            m=b[j];
        }
    }
        printf("%d",m);
    

}
