#include <stdio.h>
void main()
{
    int N,K,a[100],t,i,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                
            }
        }
    }
    for(i=0;i<N;i++)
    {
        if(a[i]<K)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}
