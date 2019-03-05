#include <stdio.h>
void main()
{
 int n,m=0,i,j,a[10],b[10],k,t;
 scanf("%d %d",&N,&M);
 for(i=0;i<N;i++)
 {
    scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
    if(K>a[i])
    {
        b[m]=a[i];
        m++;
    }
 }
 for(i=0;i<m;i++)
 {
     for(j=0;j<m;j++)
     {
         if(b[i]<b[j])
         {
             t=b[i];
             b[i]=b[j];
             b[j]=t;
         }
     }
 }
 for(i=0;i<m;i++)
{
    printf("%d ",b[i]);
}
    
}
