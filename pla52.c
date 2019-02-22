#include <stdio.h>

int main()
{
    int b[10],d=0,m1,k1,n1,s,i,j,p;
    scanf("%d%d",&n,&k);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&b[i]);
    }
    m1=n1-k1;
    for(i=0;i<=m1;i++)
    {
        for(j=0;j<k1;j++)
        {
            d=0;
            for(s=0;s<n1;s++)
            {
                if(b[s]>d)
                {
                    c=b[s];
                    p=s;
                }
            }
        }
        b[p]=0;
    }
    printf("%d",d);
    return 0;
}
