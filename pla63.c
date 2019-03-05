#include<stdio.h>
void main()
{
 int a,a1[100],a2[100],i,f=0,j;
 scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&a1[i]);
   }
   for(i=0;i<n;i++)
   {
       scanf("%d",&a2[i]);
        }
        for(i=0;i<n;i++)
        {
            f=0;
            for(j=0;j<n;j++)
            {
            if(a1[i]==a2[j])
            {
                f++;
            }
            if(f!=0)
            {
            printf("%d ",a1[i]);
            break;
            }}
        }
       
}
