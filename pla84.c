#include <stdio.h>
#include<conio.h>
void main() 
{
	int l,a[100],i,c=1,m=0,r,j;
	scanf("%d",&n);
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<l;i++)
	{
     for(j=i+1;j<l;j++)
     {
         r=(a[i])|(a[j]);
       if(r>m)
       {
           m=r;
       }
     }
	}
	if(l==1)
	{
	    printf("%d",a[0]);
	}
	else
	{
	printf("%d",m);
	}
	getch();
}
