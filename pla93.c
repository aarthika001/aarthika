#include <stdio.h>
void main()
{
int a,i,t;
scanf("%d",&a);
int a1[a];
for(i=0;i<a;i++)
{
    scanf("%d",&a1[i]);
}


for(i=0;i<a-1;i=i+2)
{
    
    t=a1[i];
    a1[i]=a1[i+1];
    a1[i+1]=t;
    }

for(i=0;i<a;i++)
{
    printf("%d ",a1[i]);
}

    
}
