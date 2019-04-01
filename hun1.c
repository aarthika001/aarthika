#include<stdio.h>

int main() 
{
int a[10],b[10],i,j,k=0,r,l=0,m=0,t,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]!=0)
    {
    l=1;
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            l++;
            a[j]=0;
        }
      
    }
if(l>1)
{
    b[k]=a[i];
    k++;m++;
}
}
}
for(k=0;k<m;k++)
{
    for(r=k+1;r<m-1;r++)
    {
        if(b[k]>b[r])
        {
            t=b[k];
            b[k]=b[r];
            b[r]=t;
        }
    }
}
for(k=0;k<m;k++)
{
    printf("%d ",b[k]);
}
return 0;    
}

