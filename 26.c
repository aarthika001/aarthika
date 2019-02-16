#include<stdio.h>
#include<conio.h>
void main()
{
    int b[10],j,k,n,t;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(j=0;j<n;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if(b[j]>b[k])
            {
                t=b[j];
                b[j]=b[k];
                b[k]=t;
            }
        }
    }
    for(j=0;j<n;j++)
    {
        printf("%d ",b[j]);
    }
    getch();
}
