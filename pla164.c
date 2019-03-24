#include <stdio.h>
#include<conio.h>
void main()
{
    int n,k,a[1000],i,f=0,c;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            f=1;
            printf("%d",a[i]);
            break;
        }
        else if(a[i]<k)
        {
          f=0;
          c=a[i];
        }
    }
    if(f==0)
    {
        printf("%d",c);
    }
}
