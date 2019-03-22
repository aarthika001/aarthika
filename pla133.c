#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,n,m,c=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
     }
     for(i=0;i<n;i++)
     {
        if(b==m)
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
    
}
