#include <stdio.h>

int main()
{
    int a[10],c=0,m,k,n,s,i,j,p;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=n-k;
    for(i=0;i<=m;i++)
    {
        for(j=0;j<k;j++)
        {
            c=0;
            for(s=0;s<n;s++)
            {
                if(a[s]>c)
                {
                    c=a[s];
                    p=s;
                }
            }
        }
        a[p]=0;
    }
    printf("%d",c);
    return 0;
}
